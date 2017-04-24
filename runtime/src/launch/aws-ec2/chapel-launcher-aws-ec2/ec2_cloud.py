# -*- coding: utf-8 -*-

import boto3
import cStringIO
from ec2_instance import EC2Instance
from ec2_launchable_instance import EC2LaunchableInstance
import logging
import os
import os.path
import paramiko.client
import posixpath

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

    def _get_ip(self, instance):
        return instance.public_ip

    def copy_to_instances(self, chapel_exe, instances, key_pair_name, key_pair_key, ssh_user):
        """Copies chapel executable file to all instances.

        :param chapel_exe: Chapel executable file path
        :type chapel_exe: str

        :param instances: list of EC2 instances
        :type instances: list(EC2Instance)
        """
        base_chapel_exe = chapel_exe

        ssh_config = ''
        for instance in instances:
            ip = self._get_ip(instance)
            ssh_config += 'Host {}\n'.format(ip)
            ssh_config += '\tIdentityFile {}\n\n'.format(key_pair_key)
        ssh_config_file = cStringIO.StringIO(ssh_config)

        results = []
        for instance in instances:
            ip = self._get_ip(instance)

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
                    username=ssh_user,
                    key_filename=key_pair_key
                )

                sftp = ssh.open_sftp()
                response1 = sftp.put(
                    chapel_exe,
                    base_chapel_exe,
                    confirm=True
                )
                sftp.chmod(base_chapel_exe, 0700)

                # FIXME: find a better way to do this.
                home_dir = sftp.normalize('.')
                LOG.debug('Home directory is %s on %s', home_dir, instance)

                ssh_dir = posixpath.join(home_dir, '.ssh')
                LOG.debug('Creating directory %s on %s', ssh_dir, instance)
                try:
                    sftp.mkdir(ssh_dir, 0700)
                except IOError:
                    LOG.debug('Failed to create directory %s, assuming it exists on %s', ssh_dir, instance)

                ssh_config_filename = posixpath.join(ssh_dir, 'config')
                LOG.debug('Writing ssh config to: %s on %s', ssh_config_filename, instance)
                sftp.putfo(
                    ssh_config_file,
                    ssh_config_filename,
                    confirm=True
                )
                sftp.chmod(ssh_config_filename, 0644)

                # FIXME: validate checksum of uploaded file(s)

                results.append(EC2LaunchableInstance(instance, base_chapel_exe))

        LOG.info('Copied %s to %d instances.', chapel_exe, len(results))
        return results

    def run_on_instances(self, launchable_instances, chapel_exe, chapel_args, key_pair_name, key_pair_key, ssh_user):
        all_ips = [self._get_ip(li.instance) for li in launchable_instances]

        env = os.environ.copy()
        env['GASNET_SPAWNFN'] = 'S'
        env['GASNET_MASTERIP'] = all_ips[0]
        env['GASNET_SSH_SERVERS'] = ' '.join(all_ips)
        env['GASNET_SSH_REMOTE_PATH'] = '/home/ec2-user' # FIXME: what should this be?
        env['GASNET_SSH_OPTIONS'] = '-i {} -l {}'.format(key_pair_key, ssh_user)

        import subprocess
        cmd = [chapel_exe] + list(chapel_args)
        LOG.debug('Executing command: %s', cmd)
        subprocess.check_call(cmd, env=env)


        return False
        results = []
        for instance in launchable_instances:
            ip = self._get_ip(instance.instance)

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
