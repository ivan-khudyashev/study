#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

# Primary function for execution
main() {
    printf "%s\n" "## Start script ##"
    printf "%s\n" "Cleaninig up all containers:\n$(docker rm -vf $(docker ps -aq))"
    printf "%s\n" "## End script ##"
}

# Entry point
main
