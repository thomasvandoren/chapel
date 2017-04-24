#!/usr/bin/env bash

set -e

CWD=$(cd $(dirname $0) ; pwd)

IMAGE=chapel/chapel
VERSION=dev-amazonlinux

docker build -t ${IMAGE}:${VERSION} $CWD

#docker build -t ${IMAGE}-gasnet:${VERSION} -f Dockerfile.gasnet $CWD

#docker build -t ${IMAGE}-gasnet-aws-ec2-launcher:${VERSION} -f Dockerfile.aws-ec2-launcher $CWD
