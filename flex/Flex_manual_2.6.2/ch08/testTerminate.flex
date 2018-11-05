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
hello       printf("hi, i'm very simple scanner\n");
    /* some comment here */
exit        yyterminate();
%%
int main(void) {
    yylex();
    return 0;
}
