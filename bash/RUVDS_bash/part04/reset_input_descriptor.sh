#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
exec 6<&0
exec 0<pattern.sh
read line
echo "First line in somefile is: ${line}"
exec 0<&6
