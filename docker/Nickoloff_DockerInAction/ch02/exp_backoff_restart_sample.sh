#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

# Test exponent backoff strategy
test_backoff() {
    printf "%s\n" "--- Start docker container printing date in exponent backoff strategy"
    printf "%s\n" "-----start $(docker run -d --name backoff-detector --restart always busybox date)"
    sleep 10s
    printf "%s\n" "--- Output logs"
    printf "%s\n" "-----logs: $(docker logs backoff-detector)"
    printf "%s\n" "--- Stopping docker container $(docker stop backoff-detector)"
}


# Primary function for execution
main() {
    printf "%s\n" "## Start script ##"
    test_backoff
    printf "%s\n" "## End script ##"
}

# Entry point
main
