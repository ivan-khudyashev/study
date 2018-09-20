// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include "ex_1_13_extlib.h"
#define MAX_WORDS 100
#define IN_WORD 1
#define OUT_WORD 0
int main() {

    struct VectInt vect;
    initVectInt(&vect);
    char inputChar;
    int curWordLen = 0;
    int maxWordLen = 0;
    int isInWord = OUT_WORD;
    // In this cycly counting lengthes of inputing words
    while((inputChar = getchar()) != EOF
      && vect.len < MAX_WORDS) {
        if(inputChar == ' ' || inputChar == '\t'
          || inputChar == '\n') {
            // If we was into word and now exit
            //  then we must save this word
            if(isInWord == IN_WORD) {
                putVectInt(&vect, curWordLet);
                if(curWordLen > maxWordLen)
                    maxWordLen = curWordLen;
                curWordLen = 0;
            }
            isInWord = OUT_WORD;
        }
        // In this branch we into a word
        else {
            // but if we was out of word we must start
            //  counting length of word
            if(isInWord == OUT_WORD)
                isInWord = IN_WORD;
            ++curWordLen;
        }
    }

    // Build diagramm now
    for(curWordLen = maxWordLen; curWordLen >0; curWordLen--) {
        for(unsigned int i = 0; i < vect.len; i++) {
            if(*(vect.v + i)>=curWordLen)
                putchar('|');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    
    return 0;
}
