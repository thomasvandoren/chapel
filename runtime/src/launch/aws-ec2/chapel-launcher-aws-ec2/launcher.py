# -*- coding: utf-8 -*-

from ec2_cloud import EC2Cloud
import click
import click_log
import logging

LOG_NAME = 'chapel_aws_ec2'
LOG = logging.getLogger(LOG_NAME)


@click.command()
@click_log.simple_verbosity_option()
@click_log.init(LOG_NAME)
@click.option('--num-locales', '-nl', default=1)
@click.option('--instance-name')
@click.option('--key-pair-name')
@click.option('--key-pair-key', type=click.Path(exists=True, file_okay=True, dir_okay=False, readable=True))
@click.argument('chapel_exe', nargs=1, type=click.Path(exists=True, file_okay=True, dir_okay=False, readable=True))
@click.argument('chapel_args', nargs=-1, type=click.STRING)
def cli(num_locales, instance_name, key_pair_name, key_pair_key, chapel_exe, chapel_args):
    LOG.debug('chapel executable is: "%s": with arguments: %s', chapel_exe, chapel_args)

    ec2 = EC2Cloud()

    instances = ec2.get_instances_by_name(instance_name, max_number=num_locales)
    launchable_instances = ec2.copy_to_instances(chapel_exe, instances, key_pair_name, key_pair_key)
    ec2.run_on_instances(launchable_instances, chapel_args, key_pair_name, key_pair_key)




if __name__ == '__main__':
    cli()
