// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const char TERMINATION_CHAR = '#';
    const int LINE_PRINT_CHAR = 8;
    char inChar;
    int curPrintCount = 0;
    printf("Start Program\n\n");
    // program here
    while((inChar = getchar()) != TERMINATION_CHAR) {
        if(curPrintCount == LINE_PRINT_CHAR) {
            curPrintCount = 0;
            putchar('\n');
        }
        printf("%c (%d) ", inChar, (int)inChar);
        curPrintCount++;
    }

    printf("\nFinish Program!\n");
    return 0;
}
