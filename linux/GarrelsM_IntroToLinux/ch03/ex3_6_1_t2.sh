#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

echo "How many partitions are on your system?"
echo
echo "List of partitions"
sudo fdisk -l | grep "/dev"
printf "\n%s" "Count of partitions = "; sudo fdisk -l | grep "/dev" | egrep -v '^Disk' | wc -l
