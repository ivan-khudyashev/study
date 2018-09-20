// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#define exchg(a, b)  { int tmp; tmp = a; a = b; b = tmp; }
#include <stdio.h>
int main() {
    
    int a = 1, b = 2;
    printf("Before exchange: a = %d, b = %d\n", a, b);
    exchg(a, b);
    printf("Before exchange: a = %d, b = %d\n", a, b);

    return 0;
}
