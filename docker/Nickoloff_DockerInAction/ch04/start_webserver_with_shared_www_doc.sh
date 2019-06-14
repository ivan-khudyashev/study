#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
set -o nounset # save of using not defined variables
set -o errexit # save from ignoring error-exit of commands

primary_action() {
    local HOST_SHARE_DIR=${PWD}/www-test-docs
    local HTTPD_WWW_DIR=/usr/local/apache2/htdocs
    docker run -d --rm --name share-doc-web -v ${HOST_SHARE_DIR}:${HTTPD_WWW_DIR} -p 80:80 httpd
    sleep 40s
    docker stop share-doc-web
}

# Primary function for execution
main() {
    printf "%s\n" "## Start script ##"
    primary_action
    printf "%s\n" "## End script ##"
}

# Entry point
main
