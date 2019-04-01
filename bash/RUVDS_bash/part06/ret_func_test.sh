#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
function myfunc {
    echo "Some str. 1, 1.0, 11.10.09, ..."
}
retval=$(myfunc)
echo "Ret value from function: ${retval}"
