// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const long MAX_COUNTED_YEARS = 100000;
    double accountBalance = 1e6;
    double withdrawsValue = 1e5;
    double interest = 0.09;
    long cntYears = 0;
    _Bool isContinue = 1;

    printf("At start Chuckie Lucky have %7.3lf $ on it's account\n", accountBalance);
    while(isContinue && cntYears < MAX_COUNTED_YEARS) {
        cntYears++;
        accountBalance -= withdrawsValue;
        if(accountBalance <= 0.0) {
            isContinue = 0;
        } else {
            accountBalance += accountBalance * interest;
        }
    }
    if(cntYears < MAX_COUNTED_YEARS) {
        printf("After %ld year(s) balance is zero\n", cntYears);
    } else {
        printf("Exhausted limit on years, but balance still > 0\n");
    }

    printf("\nFinish Program!\n");
    return 0;
}
