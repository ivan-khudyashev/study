// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

enum num_t {ZERO, ONE, TWO, THREE};

enum num_t tst(void);

int main() {
    
    printf("ONE = %d\n", tst());

    return 0;
}

enum num_t tst() {
    enum num_t x = ONE;
    return x;
}
