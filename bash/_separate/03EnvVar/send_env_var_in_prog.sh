#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
export myvar="Hello, world :-)"
prog_name=use_env_var
gcc -o ${prog_name}.o ${prog_name}.c &&./${prog_name}.o myvar
