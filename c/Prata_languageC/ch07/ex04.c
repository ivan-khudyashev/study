// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const char TERMINATION_CHAR = '#';
    char inChar;
    int cntReplaces = 0;
    printf("Start Program\n\n");
    printf("Input any text terminated with %c\n", TERMINATION_CHAR);
    // program here
    while((inChar = getchar()) != TERMINATION_CHAR) {
        if(inChar == '.') {
            inChar = '!';
            cntReplaces++;
        } else if(inChar == '!') {
            putchar('!');
            cntReplaces++;
        }
        putchar(inChar);
    }
    printf("\nCount of replaces = %d\n", cntReplaces);

    printf("\nFinish Program!\n");
    return 0;
}
