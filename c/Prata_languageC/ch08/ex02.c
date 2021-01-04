// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const int lineWidth = 10;
    const int SPACE = (int)' ';
    int nextCh = 0, cntCh = 0;
    while((nextCh = getchar()) != EOF ) {
        if(nextCh < SPACE) {
            switch((char)nextCh) {
                case '\t':
                    printf("\\t(%3d)", nextCh);
                    break;
                case '\n':
                    printf("\\n(%3d)", nextCh);
                    break;
                case '\v':
                    printf("\\v(%3d)", nextCh);
                    break;
                case '\r':
                    printf("\\r(%3d)", nextCh);
                    break;
                default:
                    printf("^%c(%3d)", (char)nextCh + (char)64, nextCh);
            }
        } else {
            printf("%c(%3d) ", (char)nextCh, nextCh);
        }
        if(++cntCh % lineWidth == 0) {
            putchar('\n');
        }
    }

    printf("\nFinish Program!\n");
    return 0;
}
