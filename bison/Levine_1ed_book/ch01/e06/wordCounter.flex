%{
#include <stdio.h>
%}
%{
int words = 0;
%}
%%
[^ \t\n\r\v\f]+ { words++; }
[ \t\n\r\v\f] {}
%%
int main(int argc, char **argv) {
    yylex();
    printf("count of words = %d\n", words);
    return 0;
}
