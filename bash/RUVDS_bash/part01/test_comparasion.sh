#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
n=005
k=200
echo "n = ${n}, k = ${k}"
echo "Compare as string:"
if [ ${n} \> ${k} ]
then
    echo "n greater than k"
else
    echo "n equal or less k"
fi
echo "Compare as number:"
if [ ${n} -gt ${k} ]
then
    echo "n greater than k"
else
    echo "n equal or less k"
fi
