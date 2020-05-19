#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

# Read man intro
man intro
# Read man ls
man ls
# Read info passwd
sudo apt-get update && sudo apt-get install info
info passwd
# Enter the apropos pwd command
apropos pwd
# Try man or info on cd
man cd
info cd
# (continue): How would you find out more about cd?
cd --help
# Read ls --help and try it out
ls --help
