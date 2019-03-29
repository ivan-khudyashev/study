#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
echo "Name of executive entity is ${0}"
if [ -n "${1}"  ]
then
    echo "There is first input arg: ${1}"
else
    echo "There is no first argument"
fi
echo "And total input params = ${#}"
