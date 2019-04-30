// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const int row = 6;
    const char printSymb = 'A';
    printf("Start Program\n\n");
    // program here
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++)
            printf("%c", printSymb + row - j);
        printf("%c", '\n');
    }

    printf("\nFinish Program!\n");
    return 0;
}
