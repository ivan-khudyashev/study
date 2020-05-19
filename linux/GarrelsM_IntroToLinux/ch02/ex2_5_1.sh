#!/usr/bin/env bash
set -o nounset # save for using undeclare variable
set -o errexit # immediately exit on error, save from continue work on error
# Section for describe Aims
# Section for short info
# 0. Define variables
# 1. Check input params if exists
# 2. Start actions
# 2.1 Determine text or graphical mode
# UNDEFINED
# 2.2 Log in as test user
su testuser
# 2.2 Logout
logout
# 2.3 Log in again, using a non-existent user name
# UNDEFINED
