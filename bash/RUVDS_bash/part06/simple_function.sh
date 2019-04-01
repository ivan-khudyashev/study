#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
function myfunc {
    echo "    This is an example of using a function"
}
count=1
while [ ${count} -le 3 ]
do
    myfunc
    count=$((${count} + 1))
done
echo "This is the end of loop"
myfunc
echo "End of the sctipt"
