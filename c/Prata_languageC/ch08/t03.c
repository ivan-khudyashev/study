// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int cntRead = 0;
    float n = 0.0;
    printf("Input float number: ");
    cntRead = scanf("%f", &n);
    printf("\n1st attempt. Count of readed floats = %d. Inputed float = %.2f\n", cntRead, n);
    cntRead = scanf("%f", &n);
    printf("\n2nd attempt. Count of readed floats = %d. Inputed float = %.2f\n", cntRead, n);

    printf("\nFinish Program!\n");
    return 0;
}
