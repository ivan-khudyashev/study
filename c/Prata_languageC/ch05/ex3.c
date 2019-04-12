// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int user_input();
int main(void)
{
    const int DAYS_IN_WEEK = 7;
    int input_days = 0;
    int week, day;
    printf("Start Program\n\n");
    // program here
    input_days = user_input();
    while(input_days > 0) {
        week = input_days / DAYS_IN_WEEK;
        day = input_days % DAYS_IN_WEEK;
        printf("%d day(s) are %d weeks, %d day(s)\n", input_days, week, day);
        input_days = user_input();
    }
    printf("\nFinish Program!\n");
    return 0;
}

int user_input()
{
    const char INVITE_INPUT[] = "Input days(0 or less for exit): ";
    int days = 0; // finish if bad input
    printf("%s", INVITE_INPUT);
    scanf("%d", &days);
    return days;
}
