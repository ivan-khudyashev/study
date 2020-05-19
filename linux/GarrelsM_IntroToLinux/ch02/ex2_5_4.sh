#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions

# Change directory to / and then to etc. Type ls; ...
cd /; cd etc; ls;
# Use the command cat inittab and read the file
# Remark: there is no inittab in systemd's system
ls /etc/systemd; ls /etc/systemd/system
# Return to your home directory using the cd command
cd
# Enter the command file .
file .
# Can you look at "." using the cat command?
# No "." this is a directory
cat .
# Display help for the cat program, using the --help option.
cat --help
# (continue): Use the option for numbering of output lines to count how
# many users are listed in the file /etc/passwd
cat -n /etc/passwd
