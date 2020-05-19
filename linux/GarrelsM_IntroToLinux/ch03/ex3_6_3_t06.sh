#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

echo "How many hours has the system been running?"
cat /proc/uptime | egrep -o '^[[:digit:]]+' | xargs -I _arg_ expr _arg_ / 3600
