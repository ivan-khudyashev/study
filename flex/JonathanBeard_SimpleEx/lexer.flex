%{
#include <string>

/* Implementation of yyFlexScanner */
#include "TestScanner.hpp"
#undef YY_DECL
#define YY_DECL int TT::TestScanner::yylex(TT::TestParser::semantic_type * const lval, TT::TestParser::location_type *loc)

/* typedef to make the returns for the tokens shorter */
using token = TT::TestParser::token;

/* define yyterminate as this instead of NULL */
#define yyterminate() return(token::END_TOKEN)

/* msvc2010 requires that we exclude this header file. */
#define YY_NO_UNISTD_H

/* update location on matching */
#define YY_USER_ACTION loc->step(); loc->columns(yyleng);

*}

%option debug
%option nodefault
%option yyclass="TT::TestScanner"
%option noyywrap
%option c++

%%
%{
    /** Code executed at the beginning of yylex **/
    yylval = lval;
%}
Hello|hello     {
                        return(token::HELLO_TOKEN);
                    }
[a-zA-Z]+           {
                        yylval->build<std::string>(yytext);
                        return(token::NAME_TOKEN);
                    }
%%
