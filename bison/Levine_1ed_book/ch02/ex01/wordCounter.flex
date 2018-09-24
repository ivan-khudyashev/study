%option noyywrap
%{
#include <stdio.h>
%}
%{
int words = 0;
int chars = 0;
int lines = 0;
%}
%%
[^ \t\n\r\v\f]+ { words++; chars+= strlen(yytext); }
\n              { chars++; lines++; }
.               { chars++; }
%%
int main(int argc, char **argv) {
    yylex();
    printf("words = %d, lines = %d, chars = %d\n", words, lines, chars);
    return 0;
}
