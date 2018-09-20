// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    int a;
    long b;
    long long c;

    double e;
    long double f;
 
    printf("Size of int: %ld byte(s)\n", sizeof(a));
    printf("Size of long: %ld byte(s)\n", sizeof(b));
    printf("Size of long long: %ld byte(s)\n", sizeof(c));

    printf("Size of double: %ld byte(s)\n", sizeof(e));
    printf("Size of long double: %ld byte(s)\n", sizeof(f));
    return 0;
}
