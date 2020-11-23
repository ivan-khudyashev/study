// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    double height, weight;
    printf("Input your height and weight through whitespace: ");
    scanf("%lf %lf", &height, &weight);
    if(weight < 100.0 && height > 64.0) {
        if(height >= 72.0) {
            printf("You are very tall for your weight.\n");
        } else if(weight > 64.0) {
            printf("You are tall for your weight.\n");
        }
    } else if (weight > 300.0 && height < 48) {
        printf("You are very short for your weight");
    }
    else {
        printf("Your weight is ideal!\n");
    }

    printf("\nFinish Program!\n");
    return 0;
}
