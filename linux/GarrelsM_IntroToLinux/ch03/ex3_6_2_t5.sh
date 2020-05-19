#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

echo "Now go to share in /usr using only one command. Change to doc. What is your present working directory?"
cd /usr/share; pwd
