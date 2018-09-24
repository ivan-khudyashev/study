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

%option noyywrap nounput batch noinput

%{
#define YY_USER_ACTION loc.columns(yyleng);
%}
%%
%{
    yy::location& loc = drv.location;
    loc.step();
%}
[ \t]+          loc.step();
[\n]+           loc.lines(yyleng); loc.step();
hello           return yy::parser::make_HELLO_TOKEN(1, loc);
[[:alpha:]]+    return yy::parser::make_ID_TOKEN(2, loc);
","             return yy::parser::make_COMMA_TOKEN(loc);
<<EOF>>         return yy::parser::make_END(loc);
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
