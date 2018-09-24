/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%token HELLO_TOKEN
%token ID_TOKEN
%token COMMA_TOKEN
%{
void yyerror(char const * s);
%}
%%
root:   HELLO_TOKEN COMMA_TOKEN ID_TOKEN
%%
void yyerror(char const *s) {
    printf("\nError when parsing: %s\n", s);
}
int main(void) {
    int res = yyparse();
    printf("Ending parsing, result = %d\n", res);
    return 0;
}
