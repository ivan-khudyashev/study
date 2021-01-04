// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <ctype.h>

float countTax(float totalPay);
_Bool chooseMenuItem(float* payRate);
int getFirst(void);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float basicPayRate;
    const float weeksInMonth = 4.0f, overtimeKoef = 1.5f, overtimeHours = 40.0f;
    float hoursInWeek = 0.0f;
    float weekPay = 0.0f, totalPay = 0.0f, totalTax = 0.0f;
    const char inpMsg[] = "Input work hours in week:";
    while(chooseMenuItem(&basicPayRate)) {
        while(printf("%s", inpMsg),!scanf("%f", &hoursInWeek)) {
            continue;
        }
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
                "gross month payment is $ %.2f, taxes is $ %.2f and net payment $ %.2f\n\n",
                hoursInWeek, totalPay, totalTax, totalPay - totalTax
        );
    }
    printf("\nFinish Program!\n");
    return 0;
}

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

_Bool chooseMenuItem(float* payRate)
{
    const int delimRowCnt = 70;
    const char delim = '*';
    const float paysRates[] = {8.75, 9.33, 10.0, 11.2};
    const size_t payRatesCount = sizeof(paysRates) / sizeof(paysRates[0]);
    const char introMsg[] = "Enter the number corresponding to the desired pay rate or action";
    const size_t interleaveCnt = 2;
    const char menuItemFormatStr[] = "%c) $ %.2f/hr %*.s";
    const char startChooseLetter = 'a';
    const int wsLength = (delimRowCnt / (int)interleaveCnt) - (int) sizeof(menuItemFormatStr);
    int userChoise;
    _Bool haveChoose = 0;
    while(!haveChoose) {
        for(int i = 0; i < delimRowCnt; i++) {
            printf("%c", delim);
        }
        printf("\n%s\n", introMsg);
        for(size_t idxItm = 0; idxItm < payRatesCount; idxItm++) {
            printf(menuItemFormatStr, (char)(startChooseLetter + idxItm), paysRates[idxItm], wsLength, "");
            if(((idxItm + 1) % interleaveCnt) == 0) {
                putchar('\n');
            }
        }
        printf("q) quit\n");
        for(int i = 0; i < delimRowCnt; i++) {
            printf("%c", delim);
        }
        printf("\nYour choise: ");
        userChoise = getFirst();
        if(userChoise == EOF || userChoise == 'q') {
            *payRate = 0.0;
            return 0;
        }
        if(
            userChoise < startChooseLetter  ||
            userChoise > (startChooseLetter + payRatesCount - 1)
        ) {
            putchar('\n');
            continue;
        }
        *payRate = paysRates[userChoise - startChooseLetter];
        haveChoose = 1;
    }
    return 1;
}

int getFirst(void)
{
    int ch, tempCh;
    while((ch = getchar()) != EOF && isspace(ch)) { continue; }
    if(ch != EOF) {
        while((tempCh = getchar()) != EOF && tempCh != '\n') {continue;} /* skip all input on this line */
    }
    return ch;
}