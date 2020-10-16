// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const int col = 10, row = 5;    
    const char printSymb = '$';
    printf("Start Program\n\n");
    // program here
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            printf("%c", printSymb);
        printf("%c", '\n');
    }

    printf("\nFinish Program!\n");
    return 0;
}
