%{
#include <stdio.h>
#include "commonHeader.h"
%}
/* declare tokens */
%token ARIASTARK
%token GREGHOUSE
%token YODA
%token DANYTARGARIAN
%token ELLENRIPLEY
%%
phrase:  pers pers pers {printf("recognize phrase!\n");}
 ;
pers: ARIASTARK { printf("recognize Aria \n");}
 | GREGHOUSE { printf("recognize Greg \n");}
 | YODA { printf("recognize Yoda\n");}
 | DANYTARGARIAN { printf("recognize Dany\n");}
 | ELLENRIPLEY { printf("recognize Ripley\n");}
 ;
%%

void yyerror(char* s) {
    printf("cinemaParser error: %s\n", s);
}


int main(int argc, char **argv) {
    char str1[] = "Yoda Aria Stark Ellen Ripley";
    YY_BUFFER_STATE buf = yy_scan_string(str1);
    // yylex();
    yyparse();
    yy_delete_buffer(buf);

    char str2[] = "Gregory House Dayeneris Targarian Yoda";
    buf = yy_scan_string(str2);
    // yylex();
    yyparse();
    yy_delete_buffer(buf);
    printf("\nFinished program!\n");
}
