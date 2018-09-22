/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%pointer
%{
#include <stdio.h>
#include <string.h>
%}
%%
"(hello)"       printf("-- hi --");
hello           {
                    int i;
                    char *textCopy = strdup(yytext);
                    unput(')');
                    for(i = yyleng - 1; i >=0; i--) unput(textCopy[i]);
                    unput('(');
                    free(textCopy);
                }
%%
int main(void) {
    yylex();
    return 0;
}
