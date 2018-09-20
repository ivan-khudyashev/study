// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
/*
This program convert temperature from Celsius to Farengeith.
And tabulated values from 0, 20, to 300
*/

int main() {
    
    float fahr, celsius;
    int lower, upper, step;
    char format_row[] = "\t%4.0f %6.1f\n";
    char format_header[] = "%11s %7s\n";

    lower = -60;
    upper = 60;
    step = 10;

    celsius = lower;
    printf(format_header, "Celsius", "Fahr");
    while(celsius <= upper) {
        fahr = celsius * 9.0/5.0 + 32.0;
        printf(format_row, celsius, fahr);
        celsius += step;
    }

    return 0;
}
