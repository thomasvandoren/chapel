# -*- coding: utf-8 -*-

import boto3
from ec2_instance import EC2Instance
from ec2_launchable_instance import EC2LaunchableInstance
import logging
import os
import os.path
import paramiko.client

LOG = logging.getLogger('chapel_aws_ec2')


class EC2Cloud(object):

    def __init__(self):
        self._ec2 = boto3.client('ec2')
        self._azs = self._get_availability_zones()

    def _get_availability_zones(self):
        resp = self._ec2.describe_availability_zones(Filters=[{
            'Name': 'state',
            'Values': ['available']
        }])
        result = [ az['ZoneName'] for az in resp['AvailabilityZones'] ]
        LOG.debug('Found availability zones: %s', ', '.join(result))
        return result

    def launch_instances(self, num_locales):
        LOG.debug('Launching %d instances...', num_locales)
        raise NotImplemented('not yet')

    def get_instances_by_name(self, name, max_number=None):
        """Returns list of instances that have tags where Name=<name>.

        :param name: name to lookup instances
        :type name: str

        :param max_number: maximum number of instances to return
        :type max_number: int
        """
        results = []
        next_token = None
        keep_going = True
        while keep_going:
            if next_token is None:
                resp = self._ec2.describe_instances(
                    Filters=[{
                        'Name': 'tag:Name',
                        'Values': [name],
                    }])
            else:
                resp = self._ec2.describe_instances(
                    Filters=[{
                        'Name': 'tag:Name',
                        'Values': [name],
                    }],
                    next_token=next_token)
            for reservation in resp['Reservations']:
                results.extend(reservation['Instances'])

            next_token = resp.get('NextToken', None)
            keep_going = next_token is not None

        LOG.debug('Found %d ec2 instances with tag Name="%s"', len(results), name)
        instances = [ EC2Instance(i) for i in results ]

        LOG.debug('Instances with name %s: ', name)
        for instance in instances:
            LOG.debug(instance)

        if max_number is not None and max_number >= 0:
            instances = instances[0:max_number]
        return instances

    def copy_to_instances(self, chapel_exe, instances, key_pair_name, key_pair_key):
        """Copies chapel executable file to all instances.

        :param chapel_exe: Chapel executable file path
        :type chapel_exe: str

        :param instances: list of EC2 instances
        :type instances: list(EC2Instance)
        """
        base_chapel_exe = chapel_exe

        results = []
        for instance in instances:
            ip = instance.public_ip

            with paramiko.client.SSHClient() as ssh:

                class AddMissingHostKeyPolicy(paramiko.client.MissingHostKeyPolicy):
                    def missing_host_key(self, client, hostname, key):
                        if hostname != ip:
                            raise Exception('Unexpected ip {} expected was {}'.format(hostname, ip))
                        return True
                ssh.set_missing_host_key_policy(AddMissingHostKeyPolicy())

                LOG.debug('Copying %s to %s...', chapel_exe, instance)
                ssh.connect(
                    hostname=ip,
                    port=22,
                    username='ec2-user',
                    key_filename=key_pair_key
                )

                sftp = ssh.open_sftp()
                response = sftp.put(
                    chapel_exe,
                    base_chapel_exe,
                    confirm=True
                )
                sftp.chmod(base_chapel_exe, 0700)

                # FIXME: validate checksum of uploaded file

                results.append(EC2LaunchableInstance(instance, base_chapel_exe))

        LOG.info('Copied %s to %d instances.', chapel_exe, len(results))
        return results

    def run_on_instances(self, launchable_instances, chapel_args, key_pair_name, key_pair_key):
        cmd_args = ' '.join(chapel_args)
        results = []
        for instance in launchable_instances:
            ip = instance.instance.public_ip

            with paramiko.client.SSHClient() as ssh:

                class AddMissingHostKeyPolicy(paramiko.client.MissingHostKeyPolicy):
                    def missing_host_key(self, client, hostname, key):
                        if hostname != ip:
                            raise Exception('Unexpected ip {} expected was {}'.format(hostname, ip))
                        return True
                ssh.set_missing_host_key_policy(AddMissingHostKeyPolicy())

                ssh.connect(
                    hostname=ip,
                    port=22,
                    username='ec2-user',
                    key_filename=key_pair_key
                )

                cmd = '{} {}'.format(instance.chapel_exe, cmd_args)
                (stdin, stdout, stderr) = ssh.exec_command(cmd)
                stdin.close()
                LOG.debug('STDOUT from %s', cmd)
                LOG.info(stdout.read())
                LOG.debug('STDERR from %s', cmd)
                LOG.info(stderr.read())
