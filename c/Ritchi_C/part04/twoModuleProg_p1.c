// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

extern void action(void);
extern int gVar;
int main() {

    int gVar = 36;
    printf("Module 1. Local variable gVar = %d\n", gVar);
    action();
    
    return 0;
}
