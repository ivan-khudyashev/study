#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

docker_ver() {
    printf "docker version:\n $(docker --version)\n"
}

docker_info() {
    printf "docker info:\n $(docker info)\n"
}

docker_hello_world() {
    printf "$(docker run hello-world)\n"
}

# Primary function for execution
main() {
    printf '## Start script ##\n'
    printf "############\n"
    docker_ver
    printf "############\n"
    docker_info
    printf "############\n"
    docker_hello_world
    printf "############\n"
    printf '## End script ##\n'
}

# Entry point
main
