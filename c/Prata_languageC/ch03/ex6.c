// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float h2o_weight = 3e-23F;
    float quart_weight = 950.0F;
    float water_quart = 0.0F;
    printf("Input ammount of water's quart: ");
    scanf("%f", &water_quart);
    printf("Ammount of moleculs in this volume = %.5e\n", water_quart * quart_weight / h2o_weight);

    printf("\nFinish Program!\n");
    return 0;
}
