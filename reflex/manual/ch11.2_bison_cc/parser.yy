/* yacc grammar (.yxx file) for C++ */

%skeleton "lalr1.cc"
%require "3.2"
%language "c++"
%define api.namespace {ptaf}

%code requires{
    namespace ptaf {
      class Lexer;
    }
}

%parse-param {ptaf::Lexer& lexer }

%code {
    #include "lexer.h"
    #undef yylex
    #define yylex lexer.yylex
}
%token  CONST_NUMBER
%token  CONST_STRING
%%
root: expr { std::cout << "Successfully recognize!" << std::endl;}
 ;

expr: any_const
 | expr any_const
 ;

any_const: CONST_NUMBER
 | CONST_STRING
 ;
%%
void ptaf::parser::error(const std::string& msg)
{
    std::cerr << msg << std::endl;
}
int main()
{
    ptaf::Lexer l;
    ptaf::parser p(l);
    int ret_val = p();
    std::cout << "ret_val = " << ret_val << std::endl;
    return ret_val;
}
