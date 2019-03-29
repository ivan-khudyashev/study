#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
n=5
m=3
for (( i=0; i<${n}; i++ ))
do
    echo
    for (( j=0; j<${m};j++ ))
    do
        printf "a[${i}, ${j}] "
    done
done
echo
