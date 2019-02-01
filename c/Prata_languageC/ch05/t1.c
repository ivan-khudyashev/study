// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    int a = 17, b = 5, r, c;
    printf("Start Program\n\n");
    // program here
    printf("Input integer dividend: ");
    scanf("%d", &a);
    printf("Input integer divider (>0): ");
    scanf("%d", &b);
    if(a == 0 && b == 0) {
        printf("a = b = 0. Result of division not define\n");
        return 1;
    }
    if(b == 0) {
        printf("a != 0, b = 0. Wrong operation division\n");
        return 1;
    }
    c = a / b; r = a % b;
    printf("a / b = (c, r); where a = b * c + r\n");
    printf("%d / %d = (%d, %d)\n", a, b, c, r);

    printf("\nFinish Program!\n");
    return 0;
}
