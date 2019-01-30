// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    short int n1;
    char n2;
    printf("Input short int: ");
    scanf("%hd", &n1);
    printf("Input unsigned char (as number): ");
    scanf("%hhd", &n2);

    printf("You have inputed numbers: %d %d\n", n1, n2);


    printf("\nFinish Program!\n");
    return 0;
}
