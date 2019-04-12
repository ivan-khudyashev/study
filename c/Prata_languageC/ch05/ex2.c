// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const int RIGHT_OFFSET = 10;
    int input_number, idx = 0;
    printf("Start Program\n\n");
    // program here
    printf("Please input integer number: ");
    scanf("%d", &input_number);
    printf("A series of %d numbers:\n ", RIGHT_OFFSET + 1);
    while(idx <= RIGHT_OFFSET) {
        printf("%d ", input_number + idx);
        ++idx;
    }
    printf("\n");

    printf("\nFinish Program!\n");
    return 0;
}
