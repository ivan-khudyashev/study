#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
while [ -n "${1}" ]
do
    case "${1}" in
        -\)) echo "Found option )" ;;
        --a) echo "Found --a" ;;
        --) echo "Found --" ;;
        *) echo "${1} is not counted!"
    esac
    shift
done
