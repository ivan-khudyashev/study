#include <stdio.h>
#include <stdlib.h>
//#include "parseLib.h"
#include "cinemaList.tab.h"
#include "flexHlpHeader.h"

#define xstr(s) str(s)
#define str(s) #s
#define MAX_STRING_LEN 100000

static int isTerminateString(char* str) {
    char *p, *end;
    for(end = str + MAX_STRING_LEN, p = str;
      p != end && (*p)!= '\0'; p++);
    if(p != end && (*p) != '\0')
        return 0; // too long unterminated string
    return 1;
}

int isCorrectPhrase(char* str) {
    if(!isTerminateString(str)) {
        perror("Can't find NULL-terminated symbol in string, more than "
          xstr(MAX_STRING_LEN) " symbols without it");
        exit(1);
    }
    YY_BUFFER_STATE lexBuffer = yy_scan_string(str);
    int parsingResult = yyparse();
    yy_delete_buffer(lexBuffer);

    return parsingResult;
}
