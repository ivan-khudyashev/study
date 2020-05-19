#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions
# Change password into 'P6p3.aa!'
passwd << CHANGE_PASSWORD
oldpassword
P6p3.aa!
P6p3.aa!
CHANGE_PASSWORD
# Try again, this time enter a password that is ridiculously easy, like 123
passwd << CHANGE_PASSWORD
P6p3.aa!
123
123
CHANGE_PASSWORD
# Try again, this time don't enter a password but just hit the Enter key
passwd << CHANGE_PASSWORD
P6p3.aa!


CHANGE_PASSWORD
# Try the command psswd instead of passwd
psswd << CHANGE_PASSWORD
P6p3.aa!
123
123
CHANGE_PASSWORD
# ! Restore old password
psswd << CHANGE_PASSWORD
P6p3.aa!
oldpassword
oldpassword
CHANGE_PASSWORD
