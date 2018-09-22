/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%{
#include <stdio.h>
%}
%%
hello   /*cut this text*/
%%
int main(void) {
    yylex();
    return 0;
}
