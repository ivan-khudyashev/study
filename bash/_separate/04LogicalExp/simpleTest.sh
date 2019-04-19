#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
main(){
    printf "Start script\n"
    printf "Test some expression using short form [ condition ] && evaluate if true (must be true itself) || evaluate if false\n"
    [ -n "" ] && printf "true expression\n" || printf "false expression\n"
    printf "End script\n"
}

main
