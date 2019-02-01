// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const int max_border = 100;
    int upper_border = 20, idx = 0, sum = 0;
    printf("Start Program\n\n");
    // program here
    printf("Input upper border (value to sum at): ");
    scanf("%d", &upper_border);
    if(upper_border < 1) {
        printf("Wrong upper boarder value, must be from 1 to %d. Exit!\n", max_border);
        return 1;
    }
    while(idx++ < upper_border) {
        sum += idx * idx;
    }
    printf("You accumulate(for squares) $%d. That's very cool :)\n", sum);

    printf("\nFinish Program!\n");
    return 0;
}
