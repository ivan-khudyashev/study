// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>

void to_base_n(unsigned int number, unsigned int base);

int main(void)
{
    const char inpMsg[] = "Please input unsigned n and b (2 <= b <= 10) separated by spaces (q - for exit): ";
    const int BASE_MIN = 2, BASE_MAX = 10;
    unsigned int n, base;
    printf("Start Program\n\n");
    // program here
    printf("Program convert number n to base-count system b\n");
    while(printf(inpMsg), scanf("%u %u", &n, &base) == 2) {
        if(base < BASE_MIN || base > BASE_MAX) {
            printf("Wrong value for base it must be between 2 and 10 including\n");
            continue;
        }
        printf("number %u (decimal) = ", n);
        to_base_n(n, base);
        printf(" in system %u\n", base);
    }
    printf("\nFinish Program!\n");
    return 0;
}

void to_base_n(unsigned int number, unsigned int base)
{
    if(number < base) {
        putchar('0' + number);
        return;
    }
    to_base_n(number / base, base);
    putchar('0' + (number % base));
}