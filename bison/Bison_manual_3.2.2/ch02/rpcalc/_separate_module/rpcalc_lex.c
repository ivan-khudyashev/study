/* Lexical Analizer for rpcalc
*/

#include <stdio.h>
#include <ctype.h>
#include "rpcalc_parser.h"

int yylex(void)
{
    char c = 0;
    // skip WS
    while(isblank(c = getchar()));
    // define is input is FLOAT
    if(c == '.' || isdigit(c)) {
        ungetc(c, stdin);
        scanf("%lf", yylval);
        return NUM;
    }
    // check end of file
    if(c == EOF)
        return 0;
    // return symbol AS IS
    return c;
}
