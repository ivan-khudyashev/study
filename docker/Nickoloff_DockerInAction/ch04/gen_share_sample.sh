#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

primary_action() {
    mkdir -p example-books
    echo "----------"
    echo "Start Fowler part of library"
    docker run --name fowler -v ${PWD}/example-books:/library/PoEAA \
    -v /library/DSL alpine:latest echo "Fowler collection created."
    echo "----------"
    echo "Start Knuth part of library"
    docker run --name knuth \
    -v /library/TAoCP.vol1 -v /library/TAoCP.vol2 -v /library/TAoCP.vol3 \
    alpine:latest echo "Knuth collection created."
    echo "----------"
    echo "List all library"
    docker run --name reader --volumes-from fowler \
    --volumes-from knuth alpine:latest ls -l /library/

    echo "----------"
    echo "List all volumes from reader"
    docker inspect --format "{{json .Mounts}}" reader

    echo "5sec pause ..."
    sleep 5s
    echo "----------"
    echo "Clear all"
    docker stop reader knuth fowler
    docker rm reader knuth fowler
    rm -rf example-books
}

# Primary function for execution
main() {
    printf "%s\n" "## Start script ##"
    primary_action
    printf "%s\n" "## End script ##"
}

# Entry point
main
