/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%token ...
%{
#include <stdio.h>
void yyerror(char const *s);
%}
%%
root: ...
%%
void yyerror(char const *s) {
    printf("\nError when parsing:\n\t%s\n", s);
}
int main(void) {
    yyparse();
    return 0;
}
