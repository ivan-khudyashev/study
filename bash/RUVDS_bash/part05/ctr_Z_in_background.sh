#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
# It is supposed that user use Ctr+Z to stop script and then use `fg` or `bg`
exec 1>output_from_script
i=1
while [ ${i} -lt 10 ]
do
    echo "Step ${i}"
    i=$((i+1))
    sleep 1
done
echo "Script finished work"
