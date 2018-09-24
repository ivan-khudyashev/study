#include <stdio.h>
#include "parseLib.h"

#define xstr(s) str((s))
#define str(s) #s
#define MAX_STR_LEN 100

int main(int argc, char** argv) {
    printf("Input string(length <" xstr(MAX_STR_LEN)
      " symbols) for recognition of characters of Films:\n");
    char str[MAX_STR_LEN];
    fgets(str, MAX_STR_LEN, stdin);

    /* test parse */
    int parsingResult = isCorrectPhrase(str);
    printf("Parsing %s for phrase:\n%s\n", 
      parsingResult == 0?"OK":"ERROR", str);
    //printf("You have inputed string:\n%s\n", str);
    return 0;
}
