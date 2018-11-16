// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float sec_in_year = 3.156e+7;
    float age_in_year = 0.0F;
    printf("Input age in year(float number): ");
    scanf("%f", &age_in_year);
    printf("Your age in second = %.3e\n", age_in_year * sec_in_year);

    printf("\nFinish Program!\n");
    return 0;
}
