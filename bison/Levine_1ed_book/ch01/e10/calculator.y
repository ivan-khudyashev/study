%{
#include <stdio.h>
%}
%{
int successParse = 0;
%}
/* declare tokens */
%token NUMBER 
%token ADD SUB MUL DIV ABS OP CP AND OR
%token EOL

%%
root: calclist { printf("successfull parse\n"); } 
 ;

calclist: exp EOL
 | calclist exp EOL
 ;

exp: factor
 | exp ADD factor
 | exp SUB factor
 ;

factor: binterm
 | factor MUL binterm
 | factor DIV binterm
 ;

binterm: term
 | binterm AND term
 | binterm OR term
 ;

term: NUMBER
 | OP exp CP
 | ABS exp ABS
 ;

%%

void yyerror(char *s) {
    fprintf(stderr, "calculator parser: error %s\n", s);
}
