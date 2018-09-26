/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%skeleton "lalr1.cc"
%require "3.1"
%defines
%define api.token.constructor
%define api.value.type variant
%define parse.assert
%code requires {
    #include <string>
    class driver;
}
// The parsing context.
%param {driver& drv }

%code {
#include "driver.hh"
}

%token
    END 0 "end of file"
    COMMA_TOKEN ","
;
%token <int> HELLO_TOKEN
%token <int> ID_TOKEN

%%
%start root;
root:   HELLO_TOKEN COMMA_TOKEN ID_TOKEN {std::cout << "Recognize str" << std::endl;}
%%
void yy::parser::error(const std::string& s) {
    std::cerr << std::endl << s << std::endl;
}
