/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%skeleton "lalr1.cc"
%defines
%define api.namespace {ptaf}
%define parser_class_name {Myparser}

%code requires {
    namespace ptaf {
        class Mydriver;
        class Myscanner;
    }

#ifndef YY_NULLPTR
#if defined __cplusplus && 201103L <= __cplusplus
#define YY_NULLPTR nullptr
#else
#define YY_NULLPTR 0
#endif
#endif
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
root:   HELLO_TOKEN id_list { std::cout << "SUCCESS!" << std::endl; }
 ;
id_list: ID_TOKEN
 | id_list COMMA_TOKEN ID_TOKEN
 ;
%%


void ptaf::Myparser::error( const std::string& s) {
    std::cerr << std::endl  << "Error when parsing:" << s << std::endl;
}
