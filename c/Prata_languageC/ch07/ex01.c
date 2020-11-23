// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const char TERMINATION_SYMBOL = '#';
    int spacesCnt = 0, newLineCnt = 0, otherCnt = 0;
    char ch;
    printf("Input any text (%c - for termination):\n", TERMINATION_SYMBOL);
    while((ch = getchar()) != TERMINATION_SYMBOL) {
        switch(ch) {
            case ' ':
            case '\t':
            case '\v':
                spacesCnt++;
                break;
            case '\n':
            case '\r':
                newLineCnt++;
                break;
            default:
                otherCnt++;
        }
    }
    printf("Counts of readed symbols: Spaces = %d, NewLines = %d, Other = %d",
        spacesCnt, newLineCnt, otherCnt
    );
    printf("\nFinish Program!\n");
    return 0;
}
