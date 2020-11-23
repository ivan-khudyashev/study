// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    char ch;

    while((ch = getchar()) != '#') {
        if(ch!= '\n') {
            printf("Step1\n");
            if(ch != 'c') {
                if(ch == 'b') {
                    break;
                }
                if(ch != 'h') {
                    printf("Step2\n");
                }
                printf("Step3\n");
            }
        }
    }
    printf("Done\n");
    return 0;
}
