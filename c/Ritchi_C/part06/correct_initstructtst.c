// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <stdlib.h>

struct point;

struct point { int x; int y; };

struct point* makepoint(int x, int y);

#define SZ sizeof(struct point)
int main() {
   
    struct point x1, x2 = {10, 20};
    int point = 10;

    printf("variable with name eq tag of struct: %d\n", point);
    printf("sizeof(struct point) = %zd\n", SZ);
    x1 = *makepoint(1, 3);
    printf("struct point x1(allocated) = (%d, %d)\n", x1.x, x1.y);
    printf("And this is a pointer on point x1: %p\n", &x1);
    
    return 0;
}

struct point* makepoint(int x, int y) {
    struct point *a = malloc(sizeof(struct point));
    a->x = x; a->y = y;
    return a;
}
