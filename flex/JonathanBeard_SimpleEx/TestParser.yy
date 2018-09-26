%skeleton   "lalr1.cc"
%require    "3.0"
%debug
%defines
%define api.namespace {TT}
%define parser_class_name {TestParser}

%code requires {
    namespace TT {
        class TestScanner;
    }
}

%parse-param { TestScanner &scanner }

%code{
    #include <iostream>
    #include <cstdlib>
    #include <fstream>

#undef yylex
#define yylex scanner.yylex
}

%define api.value.type variant
%define parse.assert

%token                  END_TOKEN 0
%token                  HELLO_TOKEN
%token <std::string>    NAME_TOKEN

%locations

%%

root: HELLO_TOKEN NAME_TOKEN END_TOKEN {std::cout << std::endl << std::endl << "You typed: Hello " << $2;};

%%
void TT::TestParser::error(const location_type &l, const std::string &err_message) {
    std::cerr << "Error: " << err_message << " at " << l << std::endl;
}
