// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

void printFibonacci(int n);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("Program prints all Fibonacci numbers till index from input integer\n");
    int n;
    while(
        printf("Enter index for print Fibonacci sequence till this index: "),
        scanf("%d", &n) == 1
    ) {
        printFibonacci(n);
    }

    printf("\nFinish Program!\n");
    return 0;
}

void printFibonacci(int n)
{
    if(n < 1) {
        printf("For %d there is no sequence of Fibonacci\n", n);
        return;
    }
    int n1 = 1, n2 = 1, save;
    /* Separate command for print first two index */
    printf("[%d] = %d", 1, n1);
    if(n < 2) return;
    printf(", [%d] = %d", 2, n2);
    if(n < 3) return;
    /* Print other Fibonacci numbers */
    for(int i = 3; i <= n; i++) {
        printf(", [%d] = %d", i, n2 = (n1 + (save=n2)));
        n1 = save;
    }
    putchar('\n');
}