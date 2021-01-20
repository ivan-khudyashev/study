// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>

void ascOrderArguments(double* a, double* b, double* c);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    double a, b, c;
    printf("Program ascedent order any 3 inputed real numbers\n");
    printf("Please, input 3 real numbers separated by spaces: ");
    if(scanf("%lf %lf %lf", &a, &b, &c) ==3) {
        printf("Numbers before ordered: %lg %lg %lg\n", a, b, c);
        ascOrderArguments(&a, &b, &c);
        printf("Numbers after ordered: %lg %lg %lg\n", a, b, c);
    }

    printf("\nFinish Program!\n");
    return 0;
}

void ascOrderArguments(double* a, double* b, double* c)
{
    double xchg;
    /* First. Make true condition: (*a) < (*c) */
    if(*a > *c) {
        xchg = *a;
        *a = *c;
        *c = xchg;
    }
    /* Second. Exchange *b <=> *c if necessary */
    if(*b > *c) {
        xchg = *b;
        *b = *c;
        *c = xchg;
    }
    /* Third. If previously (*b) > (*c), then first and second arg already correct ordered */
    /*  But, if (*b) <= (*c), then possibly it is necessary exchange (*a) <=> (*b) */
    else if( *a > *b) {
        xchg = *a;
        *a = *b;
        *b = xchg;
    }
    /* Now arguments ascedent ordered */
}