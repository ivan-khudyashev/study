#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
# set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

echo "Export a senseless path by entering, for instance, export PATH=blah and try listing directory content"
echo "1. Error attempt"
export PATH=DUMMY; ls
echo "2. Right attempt"
/bin/ls

