/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%{
#include <stdio.h>
%}
%%
abc |
a   |
ab  |
abcd    ECHO; REJECT;
.|\n    /* eat other chars */
%%
int main(void) {
    yylex();
    putchar('\n');
    return 0;
}
