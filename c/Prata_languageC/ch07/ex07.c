// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

float countTax(float totalPay)
{
    const float taxRate1 = 0.15f, taxRate2 = 0.2f, taxRate3 = 0.25f;
    const float taxLimit1 = 300.0f, taxLimit2 = 450.0f;
    if(totalPay <= taxLimit1) {
        return totalPay * taxRate1;
    }
    if(totalPay <= taxLimit2) {
        return (totalPay - taxLimit1) * taxRate2 + taxLimit1 * taxRate1;
    }
    return 
        (totalPay - taxLimit2) * taxRate3 +
        (taxLimit2 - taxLimit1) * taxRate2 +
        taxLimit1 * taxRate1;
}

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const float 
        basicPayRate = 10.0f, weeksInMonth = 4.0f,
        overtimeKoef = 1.5f, overtimeHours = 40.0f;
    float hoursInWeek = 0.0f;
    float weekPay = 0.0f, totalPay = 0.0f, totalTax = 0.0f;
    const char inpMsg[] = "Input work hours in week (q - for quit):";
    while(printf(inpMsg, overtimeHours),scanf("%f", &hoursInWeek)) {
        if(hoursInWeek > overtimeHours) {
            weekPay = basicPayRate * (
                overtimeHours + (hoursInWeek - overtimeHours) * overtimeKoef
            );
        } else {
            weekPay = basicPayRate * hoursInWeek;
        }
        totalPay = weekPay * weeksInMonth;
        totalTax = countTax(totalPay);
        printf(
                "If you work %.1f hour(s) in week, then "
                "gross month payment is $ %.2f, taxes is $ %.2f and net payment $ %.2f\n",
                hoursInWeek, totalPay, totalTax, totalPay - totalTax
        );
    }
    printf("\nFinish Program!\n");
    return 0;
}
