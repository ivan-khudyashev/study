#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

echo "What is the path to your home directory?"
echo ${HOME}
echo
echo "How would another user reach your home directory starting from his own home directory, using a relative path?"
echo "Answer: not enough information for full automatisation. Partial answer for curren (not ivan) user for ivan user"
OTHER_USERNAME=ivan
cd ~ && cd ../${OTHER_USERNAME}
