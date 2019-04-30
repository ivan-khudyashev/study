// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#include <math.h>

float some_avg(float n1, float n2);

int main(void)
{
    const char msg[] = "Input 2 floats separated by space(s) (press 'q' for exit): ";
    printf("Start Program\n\n");
    // program here
    float n1, n2;
    for(printf("%s", msg);scanf("%f %f", &n1, &n2);printf("%s", msg)) {
        printf("(n1 - n2)/(n1 * n2) = %f\n", some_avg(n1, n2));
    }

    printf("\nFinish Program!\n");
    return 0;
}

float some_avg(float n1, float n2)
{
    return fabs(n1 - n2) / (n1 * n2);
}
