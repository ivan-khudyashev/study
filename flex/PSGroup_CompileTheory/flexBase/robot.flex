%option noyywrap

%{

#include <stdio.h>
#include "RobotTokens.h"

#define YY_DECL int ScanToken()

%}

%%
[ \t\r\n]+ {}
"help"      { return TOKEN_HELP; }
"up"        { return TOKEN_UP; }
"left"      { return TOKEN_LEFT; }
"down"      { return TOKEN_DOWN; }
"right"     { return TOKEN_RIGHT; }
"exit"      { return TOKEN_EXIT; }
%%
