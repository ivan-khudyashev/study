/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%skeleton "lalr1.cc"
%require "3.1"
%defines
%code requires {
    #include <string>
}
%token END 0;
%token <int> HELLO_TOKEN
%token <int> ID_TOKEN
%token <int> COMMA_TOKEN
%code {
#include <iostream>
#include <string>
#undef YY_DECL
#define YY_DECL yy::parser::symbol_type \
    yylex()
YY_DECL;
}
%%
root:   HELLO_TOKEN COMMA_TOKEN ID_TOKEN    { std::cout << "SUCCESS!" << std::endl; }
%%
void yy::parser::error(const std::string& s) {
    std::cerr << std::endl << "Error when parsing:" << s << std::endl;
}
int main(void) {
    yy::parser p();
    int res = p.parse();
    std::cout << "Successfully parsed. Result = " << res;
    return 0;
}
