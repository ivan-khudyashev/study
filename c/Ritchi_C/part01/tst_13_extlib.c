// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include "ex_1_13_extlib.h"
int main() {
    
    struct VectInt v1;
    initVectInt(&v1);
    printVectInt(&v1);

    // hack
    v1.len = v1.capacity>>1;
    printVectInt(&v1);
    fillZeroVectInt(&v1);
    printVectInt(&v1);

    return 0;
}
