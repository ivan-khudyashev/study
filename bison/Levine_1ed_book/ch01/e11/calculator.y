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
calclist: exp EOL { successParse = 1; printf("successfull parse\n"); }
 | calclist exp EOL { successParse = 1; printf("successfull parse\n"); } 
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

int main(int argc, char** argv) {
    FILE *f = fopen("testinput.txt", "rt");
    yyin = f;
    int retVal = yyparse();
    printf("retVal = %d, successParse = %d\n", retVal, successParse);
    fclose(f);
}

void yyerror(char *s) {
    fprintf(stderr, "calculator parser: error %s\n", s);
}
