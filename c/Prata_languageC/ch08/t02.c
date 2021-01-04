// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define BUFFER_LEN 5
#define xstr_macro(s) str_macro(s)
#define str_macro(s) #s

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const char enterMsg[] = "Please, input integer: ";
    const char errorMsg[] = "You input not integer lexem\n";
    char buffer[BUFFER_LEN + 1];
    int num;
    int ch;
    _Bool isEOF = 0;
    printf("This program try to get integer from input by scanning start of each lexem\n");
    printf("%s", enterMsg);
    while(scanf("%d", &num) != 1) {
        while(1) {
            scanf("%" xstr_macro(BUFFER_LEN) "s", buffer);
            ch = getchar(); /* can read next symbol, because WS just skipped */
            if(ch == EOF) {
                isEOF = 1;
                break;
            }
            if(isspace(ch)) {
                break;
            } else {
                ungetc(ch, stdin);
            }
#ifdef DEBUG
            /* DEBUG */
            printf("\t\tDEBUG. Read next buffer <--%s-->", buffer);
#endif
            /* If buffer not fulled, then WS-char is followed in input */
            if(strlen(buffer) < BUFFER_LEN) {
                ch = getchar(); /* Check if NewLine have inputed */
                break;
            }
        }
        if(isEOF) {
            break;
        }
        if(ch == '\n') {
            printf("\n%s", enterMsg);
        }
    }
    if(isEOF) {
        printf("Unfortunatelly there is no integer into input\n");
    } else {
        printf("You have input number %d\n", num);
    }

    printf("\nFinish Program!\n");
    return 0;
}