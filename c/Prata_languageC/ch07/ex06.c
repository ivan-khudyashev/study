// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const char TERMINATION_SYMBOL = '#';
    char inChar = 0;
    _Bool prevChar_e = 0;
    int cnt_ie = 0;
    printf("Input string terminated with %c: ", TERMINATION_SYMBOL);
    while((inChar = getchar()) != TERMINATION_SYMBOL) {
        if(prevChar_e) {
            if(inChar == 'i') {
                cnt_ie++;
            }
            prevChar_e = 0;
        } else {
            if(inChar == 'e') {
                prevChar_e = 1;
            }
        }
    }
    printf("There are %d occurence of \"ei\" bigramm in text\n", cnt_ie);

    printf("\nFinish Program!\n");
    return 0;
}
