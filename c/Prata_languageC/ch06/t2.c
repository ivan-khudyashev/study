// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    long num, sum = 0L;
    const char msg[] = "Input next number (q for quit):";
    while(printf("%s", msg), scanf("%ld", &num) == 1) {
        sum += num;
    }
    printf("\nTotal sum = %ld\n", sum);

    printf("Finish Program!\n");
    return 0;
}
