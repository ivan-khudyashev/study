// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const int row = 6;
    char printSymb = 'A';
    printf("Start Program\n\n");
    // program here
    for(int i = 1; i <= row; i++, printf("%c", '\n'))
        for(int j = 0; j < i; j++, printSymb++)
            printf("%c", printSymb);

    printf("\nFinish Program!\n");
    return 0;
}
