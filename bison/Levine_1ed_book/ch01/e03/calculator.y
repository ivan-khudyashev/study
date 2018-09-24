%{
#include <stdio.h>
%}
/* declare tokens */
%token NUMBER 
%token ADD SUB MUL DIV ABS OP CP AND OR
%token EOL

%%

calclist: exp EOL { printf("=%d(0x%x)\n", $1, $1); }
 | calclist exp EOL { printf("=%d(0x%x)\n", $2, $2); } 
 ;

exp: factor
 | exp ADD factor { $$ = $1 + $3; }
 | exp SUB factor { $$ = $1 - $3; }
 ;

factor: binterm
 | factor MUL binterm { $$ = $1*$3; }
 | factor DIV binterm { $$ = $1/$3; }
 ;

binterm: term
 | binterm AND term { $$ = $1&$3; }
 | binterm OR term { $$ = $1|$3;}
 ;

term: NUMBER { $$ = $1; }
 | OP exp CP { $$ = $2; }
 | ABS exp ABS { $$ = $2 > 0?$2:-($2); }
 ;

%%

void main(int argc, char **argv) {
    yyparse();
}

void yyerror(char *s) {
    fprintf(stderr, "calculator parser: error %s\n", s);
}
