%{
#include "calculator.tab.h"
%}
%%
"+"     { return ADD; }
"-"     { return SUB; }
"*"     { return MUL; }
"/"     { return DIV; }
"&&"    { return AND; }
"||"    { return OR; }
"|"     { return ABS; }
"("     { return OP; }
")"     { return CP; }
"//".*  { /* ignore comment */ }
"0x"[a-fA-F0-9]+ { yylval = (int)strtol(yytext, NULL, 0); return NUMBER; }
[0-9]+  { yylval = atoi(yytext); return NUMBER; }
"\n"    { return EOL; }
[ \t]+  { /* ignove whitespaces */ }
.       { printf("calculatorScanner: wrong symbol: %s\n", yytext); }
