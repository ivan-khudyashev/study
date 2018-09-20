// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

#define MAX_LEN 10
#define INWORD 1
#define OUTWORD 0

int main() {

    int nextSymb, indexI, indexJ;
    int wordsLengths[MAX_LEN];
    int curWordIndex = 0, curWordLength = 0;
    int state = OUTWORD;

    while((nextSymb = getchar()) != EOF) {
        if(nextSymb == ' ' || nextSymb == '\t' 
          || nextSymb == '\n') {
            state = OUTWORD;
            // save length of previous word if necessary
            if(curWordLength != 0 && curWordIndex < MAX_LEN) {
                wordsLengths[curWordIndex++]=curWordLength;
                curWordLength = 0;
            }
        }
        else if(state == OUTWORD) {
            state = INWORD;
            ++curWordLength;
        }
        else
            ++curWordLength;
    }
    // save previous length of word if EOF immediately after word
    if(curWordLength != 0 && curWordIndex < MAX_LEN)
        wordsLengths[curWordIndex++] = curWordLength;
    // print all lengths
    for(indexI = 0; indexI < curWordIndex; ++indexI) {
        //printf("\nlength(word[%d]) = %d", index, wordsLengths[index]);
        for(indexJ = 0; indexJ < wordsLengths[indexI]; ++indexJ)
            putchar('=');
        printf("\n");
    }
    //printf("\n");
    
    return 0;
}
