#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

output_secret() {
    docker run --rm dockerinaction/ch3_ex2_huntanswer
}

scavenger_act() {
    docker run -it --rm dockerinaction/ch3_ex2_hunt
}

# Primary function for execution
main() {
    printf "%s\n" "## Start script ##"
    output_secret
    scavenger_act
    printf "%s\n" "## End script ##"
}

# Entry point
main
