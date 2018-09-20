// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {

    float x = 1.0;
    float *pf = &x;
    void *pm = pf;
    int *pi = pm;
    printf("Sizes: int = %zd, float = %zd," 
      " float_value = %zd, int_value = %zd\n", 
      sizeof(int), sizeof(float), sizeof *pf, sizeof *pi);
    printf("Same place in memory: float = %.2f  int = %d\n", *pf, *pi);
    
    return 0;
}
