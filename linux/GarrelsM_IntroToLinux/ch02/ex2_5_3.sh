#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

# Enter the command $ cd blah
cd blah
# Enter the command $ cd ..
cd ..
# List the directory contents with the ls command
# ...
# - Check using the pwd command
ls
pwd
# Enter the cd command
cd
# Repeat step 2 two times
cd ..;cd ..
# Display the content of this directory
ls
# Try the command cd root
cd root
# Repeat step 4
cd
