# -*- coding: utf-8 -*-

import magic_repr

class EC2Instance(object):
    """Chapel AWS EC2 launcher representation of an EC2 instance."""

    def __init__(self, instance_dict):
        self.id = instance_dict['InstanceId']

        self.instance_type = instance_dict['InstanceType']
        self.launch_time = instance_dict['LaunchTime']

        self.private_ip = instance_dict['PrivateIpAddress']
        self.private_dns_name = instance_dict['PrivateDnsName']
        self.public_ip = instance_dict['PublicIpAddress']
        self.public_dns_name = instance_dict['PublicDnsName']

        self.key_name = instance_dict['KeyName']
        self.security_groups = instance_dict['SecurityGroups']

        self.arch = instance_dict['Architecture']

    __repr__ = magic_repr.make_repr('id', 'public_ip', 'private_ip')
