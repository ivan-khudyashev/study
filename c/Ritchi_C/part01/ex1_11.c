// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
/*
Program for counting words
*/
#include <stdio.h>

#define IN 1
#define OUT 0
int main() {
    
    char inputChar;
    int cntWords = 0, inWord = OUT;

    while((inputChar = getchar()) != EOF) {
        if(inputChar == ' ' || inputChar == '\n'
          || inputChar == '\t')
            inWord = OUT;
        else if(inWord == OUT) {
            inWord = IN;
            ++cntWords;
        }
    }

    printf("Number of words = %d\n", cntWords);
    
    return 0;
}
