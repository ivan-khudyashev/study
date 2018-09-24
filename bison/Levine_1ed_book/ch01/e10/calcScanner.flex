%{
#include "calculator.tab.h"
%}
%{
int cntToken = 0;
%}
%%
"+"     { cntToken++; return ADD; }
"-"     { cntToken++; return SUB; }
"*"     { cntToken++; return MUL; }
"/"     { cntToken++; return DIV; }
"&&"    { cntToken++; return AND; }
"||"    { cntToken++; return OR; }
"|"     { cntToken++; return ABS; }
"("     { cntToken++; return OP; }
")"     { cntToken++; return CP; }
"//".*  { /* ignore comment */ }
"0x"[a-fA-F0-9]+ { cntToken++; yylval = (int)strtol(yytext, NULL, 0); return NUMBER; }
[0-9]+  { cntToken++; yylval = atoi(yytext); return NUMBER; }
"\n"    { return EOL; }
[ \t]+  { /* ignove whitespaces */ }
.       { printf("calculatorScanner: wrong symbol: %s\n", yytext); }
%%
int tokenCounter(char* str) {
    //yyin = inputStream;
    YY_BUFFER_STATE bp;
    bp = yy_scan_string(str);
    cntToken = 0;
    while(yylex() != 0);
    return cntToken;
}
