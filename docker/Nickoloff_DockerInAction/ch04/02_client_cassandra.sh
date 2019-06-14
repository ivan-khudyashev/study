#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

primary_action() {
    docker run -it --rm --link cass1:cass cassandra:2.2 cqlsh cass
}

# Primary function for execution
main() {
    printf "%s\n" "## Start script ##"
    primary_action
    printf "%s\n" "## End script ##"
}

# Entry point
main
