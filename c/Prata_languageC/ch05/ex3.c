// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int user_input();
int main(void)
{
    const int days_in_week = 7;
    int input_days = 0;
    int week, day;
    printf("Start Program\n\n");
    // program here
    input_days = user_input();
    while(input_days > 0) {
        week = input_days / days_in_week;
        day = input_days % days_in_week;
        printf("%d day(s) are %d weeks, %d day(s)\n", input_days, week, day);
        input_days = user_input();
    }
    printf("\nFinish Program!\n");
    return 0;
}

int user_input()
{
    const char invite_input[] = "Input days(0 or less for exit): ";
    int days = 0; // finish if bad input
    printf("%s", invite_input);
    scanf("%d", &days);
    return days;
}
