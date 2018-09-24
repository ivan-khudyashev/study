%{
#include <stdio.h>
%}
/* declare tokens */
%token ARIASTARK
%token GREGHOUSE
%token YODA
%token DANYTARGARIAN
%token ELLENRIPLEY
%%
root: phrase { printf("Recognize phrase!\n"); }
 ;
phrase:  pers pers pers
 ;
pers: ARIASTARK
 | GREGHOUSE
 | YODA
 | DANYTARGARIAN
 | ELLENRIPLEY
 ;
%%

void yyerror(char* s) {
    fprintf(stderr, "cinemaParser error: %s\n", s);
}

