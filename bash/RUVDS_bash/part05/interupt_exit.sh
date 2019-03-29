#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
trap "./dumbwork.sh" EXIT
echo "This is a test-script for interrupt EXIT signal. PID of curproc = ${$}. Parent PID = ${PPID}"
sleep 5
