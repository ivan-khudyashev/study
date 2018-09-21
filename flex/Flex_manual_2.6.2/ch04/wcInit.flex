/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%{
#include <stdio.h>
int cntsymb = 0, cntlines = 0;
%}
%%
\n  cntlines++; cntsymb++;
.   cntsymb++;
%%
int main(void) {
    yylex();
    printf("Lines = %d, Symbols = %d\n", cntlines, cntsymb);
    return 0;
}
