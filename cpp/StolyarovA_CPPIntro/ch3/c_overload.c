#include <stdio.h>

int foo(int a)
{
    return 1 + a;
}
int foo(double b)
{
    return (int)b;
}

int main(void)
{
    int a = 10;
    double b = 8.9998;
    printf("Start program\n");
    printf("foo(a) = %d, foo(b) = %d\n", foo(a), foo(b));
    printf("End program\n");
    return 0;
}
