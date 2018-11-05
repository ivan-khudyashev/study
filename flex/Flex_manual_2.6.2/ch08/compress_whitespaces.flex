/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap noreject
%{
#include <stdio.h>
%}
%%
[ \t]+  putchar(' ');
[ \t]+$ /* cut WS in end of string */
%%
int main(void) {
    yylex();
    return 0;
}
