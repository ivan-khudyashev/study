/* Reverse Polish Notation calculator */

%{
  #include <stdio.h>
  #include <math.h>
  #include <ctype.h>
  int yylex(void);
  void yyerror(char const *);
%}

%define api.value.type {int}
%token NUM
%left '-' '+'
%left '*' '/'
%precedence NEG     /* negation--unary minus */
%right '^'

%%
/* Grammar rules and actions follow. */
input:
   %empty
 | input line
 ;

line:
   '\n'
 | exp '\n'                             { printf("%d\n", $1); }
 | error '\n'                           { yyerrok; }
 ;


exp:
   NUM                                  { $$ = $1; }
 | exp '+' exp                          { $$ = $1 + $3; }
 | exp '-' exp                          { $$ = $1 - $3; }
 | exp '*' exp                          { $$ = $1 * $3; }
 | exp '/' exp                          
    { 
        if($3) {
            $$ = $1 / $3;
        }
        else {
            $$ = $1;
            fprintf(stderr, "%d.%d - %d.%d: division by zero\n",
                @3.first_line, @3.first_column,
                @3.last_line, @3.last_column
            );
        }
    }
 | exp '^' exp                          { $$ = pow($1, $3); }
 | '-' exp  %prec NEG                   { $$ = -$2; }
 | '(' exp ')'                          { $$ = $2; }
 ;
%%
int yylex(void)
{
    int c = 0;
    // skip WS
    while(isblank(c = getchar())){
        ++yylloc.last_column;
    }
    yylloc.first_line = yylloc.last_line;
    yylloc.first_column = yylloc.last_column;
    // define is input is INT
    if(isdigit(c)) {
        yylval = c - '0';
        while(isdigit(c = getchar())) {
            ++yylloc.last_column;
            yylval*= 10;
            yylval += (c - '0');
        }
        ungetc(c, stdin);
        return NUM;
    }
    // check end of file
    yylloc.first_column = yylloc.last_column;
    if(c == EOF)
        return 0;
    if(c == '\n') {
        ++yylloc.last_line;
        yylloc.last_column = 0;
    }
    else {
        ++yylloc.last_column;
    }
    // return symbol AS IS
    return c;
}

void yyerror(char const *s)
{
    fprintf(stderr, "error when parse: %s\n", s);
}

int main(void)
{
    yylloc.last_line = 1;
    yylloc.last_column = 0;
    return yyparse();
}


