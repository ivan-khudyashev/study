// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

_Bool getData(float* firstLimit, float* income);
float getTax(float* firstLimit, float* income);
int main(void)
{
    printf("Start Program\n\n");
    // program here
    
    float firstLimit, income;
    char greetingMsg[] =
        "This program calculate total tax depend on "
        "your category and income\n\n";
    printf("%s\n", greetingMsg);
    while(getData(&firstLimit, &income)) {
        printf("Your tax is $ %.2f\n\n", getTax(&firstLimit, &income));
    }

    printf("\nFinish Program!\n");
    return 0;
}
_Bool getData(float* firstLimit, float* income)
{
    int inputSymbol = 0;
    _Bool hasInput = 0;
    const float
        cat1_Single = 17850.0, cat2_HeadOfHousehold = 23900.0,
        cat3_MarriedJoint = 29750.0, cat4_MarriedSeparate = 14875
    ;
    char queryCategoryMsg[] =
        "Input your category\n"
        "Category: 1) Single; 2) Head of Household; 3) Married, Joint; "
        "\n4) Married, Separate; q) for quit\n";
    char queryIncomeMsg[] =
        "Input your year's income in dollars: ";
    /* input category */
    while(!hasInput) {
        printf("%s", queryCategoryMsg);
        inputSymbol = getchar();
        if(inputSymbol == EOF) {
            return 0; /* stop program by end of file */
        }
        hasInput = 1;
        switch((char)inputSymbol) {
            case '1':
                *firstLimit = cat1_Single;
                break;
            case '2':
                *firstLimit = cat2_HeadOfHousehold;
                break;
            case '3':
                *firstLimit = cat3_MarriedJoint;
                break;
            case '4':
                *firstLimit = cat4_MarriedSeparate;
                break;
            case 'q':
                return 0; /* stop program by user's input */
            default:
                hasInput = 0;
        }
    }
    hasInput = 0;
    /* Input income */
    while(!hasInput) {
        printf("%s", queryIncomeMsg);
        if(scanf("%f", income)) {
            hasInput = 1;
        } else {
            printf("%s\n", "Wrong value for income, you must input integer or decimal value");
        }
        /* Clear input for next iteration */
        while(getchar() != '\n') {
            continue;
        }
    }
    return 1;
}
float getTax(float* firstLimit, float* income)
{
    const float
        firstLimitPercent = 0.15, exceedPercent = 0.28;
    if(*income > *firstLimit) {
        return 
            (*income - *firstLimit) * exceedPercent + *firstLimit * firstLimitPercent;
    }
    return *income * firstLimitPercent;
}