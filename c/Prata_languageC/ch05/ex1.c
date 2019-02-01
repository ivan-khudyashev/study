// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int user_input();
int main(void)
{
    const int min_in_hour = 60;
    int input_min = 0;
    int hour, min;
    printf("Start Program\n\n");
    // program here
    input_min = user_input();
    while(input_min > 0) {
        hour = input_min / min_in_hour;
        min = input_min % min_in_hour;
        printf("Your have inputed %d min\n\t Thist is %d hour(s) and %d minute(s)\n", input_min, hour, min);
        input_min = user_input();
    }
    printf("\nFinish Program!\n");
    return 0;
}

int user_input()
{
    const char invite_input[] = "Input minutes (0 for exit): ";
    int min = 0; // finish if bad input
    printf("%s", invite_input);
    scanf("%d", &min);
    return min;
}
