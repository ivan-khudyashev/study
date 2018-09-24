/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%{
#include <stdio.h>
#include "helloGrammarParser.h"
%}
%%
hello           return HELLO_TOKEN;
[[:alpha:]]+    return ID_TOKEN;
","             return COMMA_TOKEN;
%%
