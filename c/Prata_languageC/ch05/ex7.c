// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

void cube_and_print(double x, const char var_name[]);
int main(void)
{
    const char VAR_NAME[] = "x";
    double x = 0.;
    printf("Start Program\n\n");
    // program here
    printf("Input number %s = ", VAR_NAME);
    scanf("%lf", &x);
    cube_and_print(x, VAR_NAME);

    printf("\nFinish Program!\n");
    return 0;
}

void cube_and_print(double x, const char var_name[])
{
    printf("%s^3 = %4g", var_name, x*x*x);
}
