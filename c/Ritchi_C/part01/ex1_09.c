// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    char inputChar;
    int isSpace = 0;
    while((inputChar = getchar()) != EOF) {
        if(inputChar == ' ')
            isSpace = 1;
        if(inputChar != ' ') {
            if(isSpace == 1)
                putchar(' ');
            isSpace = 0;
            putchar(inputChar);
        }
    }

    return 0;
}
