#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
main() {
    local fileName=fileWithArrayByLine.txt
    declare -a array
    mapfile array < ./${fileName}
    printf "We load content of file <${fileName}> in array (array's length = %d:\n" ${#array[@]}
    for ((i=0; i<${#array[@]}; i++))
    do
        printf "Line #%d: %s\n" ${i} "${array[${i}]}"
    done
}

main
