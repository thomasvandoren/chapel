#!/usr/bin/env bash

set -e

CWD=$(cd $(dirname $0) ; pwd)

IMAGE=chapel/chapel
VERSION=1.15.0-amazonlinux
LATEST=amazonlinux

docker build -t ${IMAGE}:${LATEST} -t ${IMAGE}:${VERSION} $CWD

docker build -t ${IMAGE}-gasnet:${LATEST} -t ${IMAGE}-gasnet:${VERSION} -f Dockerfile.gasnet $CWD
