// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const int COHESIVE_LIMIT = 150;
    const int CNT_WEEK_LIMIT = 100;
    int startFriendCount = 5;
    int currentDec = 1;
    int multiplicator = 2;
    int currentFriendCount = startFriendCount;
    int numWeek = 1;
    while(currentFriendCount < COHESIVE_LIMIT && numWeek < CNT_WEEK_LIMIT) {
        currentFriendCount = (currentFriendCount - currentDec++) * multiplicator;
        printf("Count of friends = %d, week = %d\n", currentFriendCount, numWeek++);
    }
    if(numWeek < CNT_WEEK_LIMIT) {
        printf("After %d week(s) numbers of friends increas cohesive limit\n", numWeek);
    } else {
        printf(
            "Exhausted limit on week's count,"
            " but numbers of friends still less then cohesive limit"
        );
    }

    printf("\nFinish Program!\n");
    return 0;
}
