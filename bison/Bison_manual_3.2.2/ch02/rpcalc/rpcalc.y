/* Reverse Polish Notation calculator */

%{
  #include <stdio.h>
  #include <math.h>
  #include <ctype.h>
  int yylex(void);
  void yyerror(char const *);
%}

%define api.value.type {double}
%token NUM

%%
/* Grammar rules and actions follow. */
input:
   %empty
 | input line
 ;

line:
   '\n'
 | exp '\n'                             { printf("%.6lf\n", $1); }
 ;


exp:
   NUM                                  { $$ = $1; }
 | exp exp '+'                          { $$ = $1 + $2; }
 | exp exp '-'                          { $$ = $1 - $2; }
 | exp exp '*'                          { $$ = $1 * $2; }
 | exp exp '/'                          { $$ = $1 / $2; }
 | exp exp '^'                          { $$ = pow($1, $2); }
 | exp 'n'                              { $$ = -$1; }
 ;
%%
int yylex(void)
{
    char c = 0;
    // skip WS
    while(isblank(c = getchar()));
    // define is input is FLOAT
    if(c == '.' || isdigit(c)) {
        ungetc(c, stdin);
        scanf("%lf", &yylval);
        return NUM;
    }
    // check end of file
    if(c == EOF)
        return 0;
    // return symbol AS IS
    return c;
}

void yyerror(char const *s)
{
    fprintf(stderr, "error when parse: %s\n", s);
}

int main(void)
{
    return yyparse();
}


