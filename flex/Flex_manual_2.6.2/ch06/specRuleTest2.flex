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
(?# Unfortunately it is not possible
  to use start line "^" and end line "$"
  patterns in parenthesis of any type)
(?x:hello\$
)       printf("recognized pattern: %s\n", yytext);
%%
int main(void) {
    yylex();
    return 0;
}
