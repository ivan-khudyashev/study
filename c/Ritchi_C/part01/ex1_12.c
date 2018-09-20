// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
/*
Program print it's input. But place only one word on each
line
*/
#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXLEN 100 // maximum of word's length
int main() {
    
    int inWord = OUT;
    char inputChar;

    while( (inputChar = getchar()) != EOF ) {
        if(inputChar == ' ' || inputChar == '\t' 
          || inputChar == '\n') {
            inWord = OUT;
        }
        else {
            if(inWord == OUT) {
                inWord = IN;
                putchar('\n');
            }
            putchar(inputChar);
        }
    }
    putchar('\n');

    return 0;
}
