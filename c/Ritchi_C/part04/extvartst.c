// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    extern int x;
    printf("external variable x = %d\n", x);
    x = 10;
    printf("we change value of x, now x = %d\n", x);

    return 0;
}

int x = 5;
