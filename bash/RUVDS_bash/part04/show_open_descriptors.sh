#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
#
# Open new descriptor
exec 3> testfile.txt
#echo "some str" >&3
#
# Show all open descriptors in current process
lsof -a -p $$
#
#Close descriptor
exec 3>&-
