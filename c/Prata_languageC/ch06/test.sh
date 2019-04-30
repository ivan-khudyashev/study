#!/usr/bin/env bash
# Test script
exec 6<&0
exec 0< numbers.txt
./t2.o
exec 0>&-
exec 0<&6
echo "Job well done!"
