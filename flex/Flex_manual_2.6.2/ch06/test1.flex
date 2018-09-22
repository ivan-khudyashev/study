/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%{
#include <stdio.h>
%}
%%
(?i:abc)    printf("Match!\n");
.  /* skip */
%%
int main(void) {
    yylex();
    return 0;
}
