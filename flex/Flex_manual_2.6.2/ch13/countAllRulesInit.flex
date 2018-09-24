/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%{
#include <stdio.h>
#define YY_USER_ACTION ++rulActCnt[yy_act];
int rulActCnt[YY_NUM_RULES + 1];
%}
%%
abc /* empty */
def /* empty */
111 /* empty */
%%
int main(void) {
    for(int i = 0; i <= YY_NUM_RULES; i++)
        rulActCnt[i] = 0;
    yylex();
    for(int i = 0; i <= YY_NUM_RULES; i++)
        printf("Rule %d activated %d time(s)\n", i, rulActCnt[i]);
    return 0;
}
