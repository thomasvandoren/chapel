
Goal: Provide a simple launcher interface for running Chapel programs on one or
more AWS EC2 instances.

Current method for launching on AWS is manual, and totally possible: http://chapel.cray.com/docs/master/platforms/aws.html


Ideal intro:

AWS

* Run `aws configure` and enter AWS access key and secret
* Compile with: `env CHPL_LAUNCHER=gasnet-aws-ec2 chpl hello.chpl -o hello`
* Launch with: `./hello -nl 5 --manage-instances` (launches 5 ec2 instances in your account, runs chapel program, then terminates the instances down)

And then to use existing instances by tag: `./hello -nl 5 --use-tags ChapelNode=true,Env=dev`

By name: `./hello -nl 5 --use-tags-regex 'Name=chapel-node-.*'`

By id: `./hello -nl 5 --use-ids i-0123456789abcdef`


::

   ./hello -nl 5 --manage-instances --instance-type t2.xlarge

GCP

* Run `gcloud init` and enter credentials
* Compile with `env CHPL_LAUNCHER=gasnet-gcp-gce chpl hello.chpl -o hello`
* Launch with `./hello -nl 5 --manage-instances`



Configuration parameters:

* Create instances
* Delete instances
* Number of instances
* Instance type
* Instance images (i.e. AMI)
* Volumes
* Public ips
* VPC
* Subnets
* Instance profile
* ... and everything else.

It is probably going to be useful to enable people to declare configuration
files that enumerate all possible configuration values.


Will want to provide IAM policy (or similar to GCP) that enables different actions. Examples:

* Minimal policy to launch on existing nodes (DescribeInstances?)
* Create & destroy new instance
