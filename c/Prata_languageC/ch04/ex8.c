// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    float miles, fuel_galon, km, fuel_liter;
    const float liters_in_galon = 3.785;
    const float km_in_miles = 1.609;
    printf("Start Program\n\n");
    // program here
    printf("Input finished miles: ");
    scanf("%f", &miles);
    printf("Input spent fuel(in galon): ");
    scanf("%f", &fuel_galon);

    printf("miles for 1 galon = %.1f\n", miles / fuel_galon);
    km = km_in_miles * miles;
    fuel_liter = liters_in_galon * fuel_galon;
    printf("liters for 100 km = %.1f\n", 100.0f * (fuel_liter / km));

    printf("\nFinish Program!\n");
    return 0;
}
