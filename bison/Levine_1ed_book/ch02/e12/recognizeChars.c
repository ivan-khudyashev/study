#include <stdio.h>
#include "cinemaList.tab.h"
#include "flexHlpHeader.h"

int main(int argc, char **argv) {
    int resVal = 10;
    char str1[] = "Yoda Aria Stark Ellen Ripley";
    YY_BUFFER_STATE buf = yy_scan_string(str1);
    // yylex();
    resVal = yyparse();
    printf("After correct phrase resVal = %d\n", resVal);
    yy_delete_buffer(buf);

    resVal = 11;
    char str2[] = "Gregory House Dayeneris Yoda";
    buf = yy_scan_string(str2);
    // yylex();
    resVal = yyparse();
    printf("After not correct phrase resVal = %d\n", resVal);
    yy_delete_buffer(buf);
    printf("\nFinished program!\n");
}
