#!/bin/bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
filename=testfile.txt
IFS=$'\n'
for l in $(cat ${filename})
do
    echo ">! Next line. ${l}"
done
