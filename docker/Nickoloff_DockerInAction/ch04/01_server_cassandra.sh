#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

primary_action() {
    local CONT_DIR_DATA=/var/lib/cassandra/data
    local DIR_DATA=${PWD}/cassandra_data
    echo "0. Clear dir for Cassandra's container volume"
    #rm -rf ${DIR_DATA}
    echo "1. Create dir for Cassandra's DATA (volume for container)"
    #mkdir -p ${DIR_DATA}
    echo "2. Run alpine container with volume"
    docker run -d \
    --volume ${DIR_DATA}:${CONT_DIR_DATA} \
    --name cass-shared \
    alpine echo Data Container
    echo "3. Run Cassandra with volume with Cassandra's DATA"
    docker run -d --volumes-from cass-shared --name cass1 cassandra:2.2
}

# Primary function for execution
main() {
    printf "%s\n" "## Start script ##"
    primary_action
    printf "%s\n" "## End script ##"
}

# Entry point
main
