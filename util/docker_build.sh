#!/bin/sh

./util/docker_cmd.sh make "$@" \
    -e USER_NAME=holykeebs \
    -j8
