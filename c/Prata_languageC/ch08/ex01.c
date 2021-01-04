// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int nextCh = 0, cntChars = 0;
    while((nextCh = getchar()) != EOF ) {
        cntChars++;
    }

    printf("Count of chars in file = %d\n", cntChars);

    printf("\nFinish Program!\n");
    return 0;
}
