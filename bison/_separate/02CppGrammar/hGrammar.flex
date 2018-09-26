/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%option noyywrap
%option c++
%{
#include <iostream>
#include <string>
#include "hGrammarParser.hh"

#undef YY_DECL
#define YY_DECL int yy::yyFlexLexer::yylex(yy::parser::semantic_type* const lval, yy::parser::location_type *location)

using token = yy::parser::token;
%}
%%
hello           return HELLO_TOKEN;
[[:alpha:]]+    return ID_TOKEN;
","             return COMMA_TOKEN;
%%
