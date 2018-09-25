/*
Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
*/
%{
#include <string>
#include "myscanner.hh"
#undef YY_DECL
#define YY_DECL int ptaf::Myscanner::yylex(ptaf::Myparser::semantic_type* const lval)

using token = ptaf::Myparser::token;

#define yyterminate() return(token::END)

/*#define YY_USER_ACTION loc->step(); loc->columns(yyleng);*/
%}

%option yyclass="ptaf::Myscanner"
%option noyywrap
%option c++

%%
%{
    yylval = lval;
%}
hello           return(token::HELLO_TOKEN);
[[:alpha:]]+    return(token::ID_TOKEN);
","             return(token::COMMA_TOKEN);
%%
