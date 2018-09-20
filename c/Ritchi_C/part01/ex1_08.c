// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    char inputChar;
    int tabNum = 0, spaceNum = 0, lineNum = 0;
    while((inputChar = getchar()) != EOF)
        switch(inputChar) {
            case '\t': 
                ++tabNum; 
                break;
            case ' ':
                ++spaceNum;
                break;
            case '\n':
                ++lineNum;
        }
    printf("\nSpaces = %d; TABs = %d, Lines = %d\n", spaceNum, tabNum, lineNum);

    return 0;
}
