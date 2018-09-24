/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%skeleton "lalr1.cc"
%require "3.1"
%debug
%defines
%define api.namespace {iv}
%define parser_class_name {Myparser}

%code requires {
    namespace iv {
        class Mydriver;
        class Myscanner;
    }
}

%parse-param { Myscanner &scanner }
%parse-param { Mydriver &driver }

%code{
    #include <iostream>
    #include <cstdlib>
    #include <fstream>

    #include "mydriver.hh"

#undef yylex
#define yylex scanner.yylex
}

%define api.value.type variant
%define parse.assert

%token END 0 "end of file";
%token HELLO_TOKEN
%token ID_TOKEN
%token COMMA_TOKEN

%locations

%%
root:   HELLO_TOKEN COMMA_TOKEN ID_TOKEN    { std::cout << "SUCCESS!" << std::endl; }
%%


void iv::Myparser::error(const location_type &l, const std::string& s) {
    std::cerr << std::endl << l << std::endl << "Error when parsing:" << s << std::endl;
}
