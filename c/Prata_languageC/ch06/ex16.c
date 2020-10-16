// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const long MAX_ITERATION_COUNT = (long)1E6;
    double daphneStart = 100;
    double daphneTotal = 100;
    double daphneInterest = 0.1;
    double deirdreStart = 100;
    double deirdreTotal = 100;
    double deirdreInterest = 0.05;
    double daphneEarn = 0.0;
    double deirdreEarn = 0.0;
    long cntYears = 0;

    do {
        daphneTotal += daphneEarn += daphneStart * daphneInterest;
        deirdreEarn += deirdreTotal * deirdreInterest;
        deirdreTotal += deirdreEarn;
        cntYears++;
    } while(daphneEarn > deirdreEarn && cntYears < MAX_ITERATION_COUNT);
    if(cntYears >= MAX_ITERATION_COUNT) {
        printf(
            "Reach years's limit"
            "Deirdre earn (%7.3lf) still less then Daphne earn (%7.3lf)\n",
            deirdreEarn, daphneEarn
        );
    }
    else {
        printf(
            "After %ld year(s) Deirdre earn (%7.3lf) become greater"
            " then Daphne earn (%7.3lf)\n Daphne total = %7.3lf\n" 
            "Deirdre total = %7.3lf\n", cntYears, deirdreEarn, daphneEarn,
            daphneTotal, deirdreTotal
        );
    }

    printf("\nFinish Program!\n");
    return 0;
}
