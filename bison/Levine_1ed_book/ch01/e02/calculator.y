%{
#include <stdio.h>
%}
/* declare tokens */
%token NUMBER 
%token ADD SUB MUL DIV ABS OP CP
%token EOL

%%

calclist: exp EOL { printf("=%d(%x)\n", $1, $1); }
 | calclist exp EOL { printf("=%d(%x)\n", $2, $2); } 
 ;

exp: factor
 | exp ADD factor { $$ = $1 + $3; }
 | exp SUB factor { $$ = $1 - $3; }
 ;

factor: term
 | factor MUL term { $$ = $1*$3; }
 | factor DIV term { $$ = $1/$3; }
 ;

term: NUMBER { $$ = $1; }
 | OP exp CP { $$ = $2; }
 | ABS exp ABS { $$ = $2; }
 ;

%%

void main(int argc, char **argv) {
    yyparse();
}

void yyerror(char *s) {
    fprintf(stderr, "calculator parser: error %s\n", s);
}
