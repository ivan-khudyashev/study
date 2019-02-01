// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    int a = 5, b, prev_a, c;
    printf("Start Program\n\n");
    // program here
    prev_a = a;
    b = (2*a++-1) + a;
    printf("prev_a = %d\na = %d\n(2*prev_a++-1) + prev_a = %d\n", prev_a, a, b);
    a = prev_a;
    c = a + (2 * a++-1);
    printf("prev_a = %d\na = %d\nprev_a + (2 * prev_a++-1) = %d\n", prev_a, a, c);
    printf("\nFinish Program!\n");
    return 0;
}
