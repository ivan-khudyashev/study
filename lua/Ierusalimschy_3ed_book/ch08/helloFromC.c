#include <stdio.h>
#include "helloFromC.h"

void testCfromLua() {
    printf("Hello from C\n");
}

void printNumber(int n) {
    printf("Number in C. n = %d\n", n);
}

void printStr(char *s) {
    printf("Str:\n%s\n", s);
}
