// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
/*
This program convert temperature from Farengeith to Celsius.
And tabulated values from 0, 20, to 300
*/

double FahrToCelsius(double fahr) {
    return 5.0/9.0 * (fahr - 32.0);
}

int main() {
    
    float fahr;
    int lower, upper, step;
    char format_row[] = "\t%3.0f %7.2f\n";
    char format_header[] = "%11s %7s\n";

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf(format_header, "Fahr", "Celsius");
    while(fahr <= upper) {
        printf(format_row, fahr, FahrToCelsius(fahr));
        fahr += step;
    }

    return 0;
}
