// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int i;
    char ch;

    for(i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
        printf("%c", ch);

    printf("\nFinish Program!\n");
    return 0;
}