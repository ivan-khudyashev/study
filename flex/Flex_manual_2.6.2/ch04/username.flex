/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%{
#include <stdio.h>
char* getlogin(void);
%}
%%
username    printf("%s", getlogin());
%%
char* getlogin(void) {
    static char login[] = "BaHeK1983";
    return login;
}
int main(void) {
    yylex();
    return 0;
}
