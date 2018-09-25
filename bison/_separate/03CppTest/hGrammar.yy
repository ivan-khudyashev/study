/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%skeleton "lalr1.cc"
%require "3.1"
%defines
%define api.namespace {ptaf}
%define parser_class_name {Myparser}

%code requires {
    namespace ptaf {
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


%%
root:   HELLO_TOKEN COMMA_TOKEN ID_TOKEN    { std::cout << "SUCCESS!" << std::endl; }
%%


void ptaf::Myparser::error( const std::string& s) {
    std::cerr << std::endl  << "Error when parsing:" << s << std::endl;
}
