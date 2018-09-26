/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%{
#include <cerrno>
#include <climits>
#include <cstdlib>
#include <string>
#include "driver.hh"
#include "helloGrammarParser.hh"

%}

%option noyywrap

%%
[ \t]+          /**/ 
[\n]+           /**/ 
hello           return yy::parser::make_HELLO_TOKEN(1);
[[:alpha:]]+    return yy::parser::make_ID_TOKEN(2);
","             return yy::parser::make_COMMA_TOKEN();
<<EOF>>         return yy::parser::make_END();
%%
void driver::scan_begin() {
    if(file.empty() || file == "-")
        yyin = stdin;
    else if (!(yyin = fopen(file.c_str(), "r"))) {
        std::cerr << "cannot open" << file << ": " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }
}

void driver::scan_end() {
    fclose(yyin);
}
