%top{
/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
}
%option noyywrap
%top{
#include <stdio.h>
}
%%
%%
int main(void) {
    yylex();
    return 0;
}
