#include <stdio.h>

void yyerror(char const *s)
{
    fprintf(stderr, "error when parse: %s\n", s);
}
