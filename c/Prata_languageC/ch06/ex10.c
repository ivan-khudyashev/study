// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

void primary_action();
int calculate_sum(int lowLimit, int highLimit);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    primary_action();

    printf("\nFinish Program!\n");
    return 0;
}

void primary_action()
{
    const char msg[] = "Input lower and upper integer limit (wrong limits for quit): ";
    int lowLimit = 0, highLimit = 0;
    _Bool isContinue = 1;
    printf("%s", msg);
    scanf("%d%d", &lowLimit, &highLimit);
    isContinue = lowLimit < highLimit?1:0;
    while(isContinue) {
        printf("The sums of the squares from %d to %d is %d\n", lowLimit * lowLimit, 
            highLimit * highLimit, calculate_sum(lowLimit, highLimit));
        printf("%s", msg);
        scanf("%d%d", &lowLimit, &highLimit);
        isContinue = lowLimit < highLimit?1:0;
    }
}

int calculate_sum(int lowLimit, int highLimit)
{
    int sum = 0;
    for(int idx = lowLimit; idx <= highLimit; idx++) {
        sum += idx * idx;
    }
    return sum;
}
