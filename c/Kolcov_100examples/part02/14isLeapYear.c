// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    

    int year;
    printf("Input year: ");
    scanf("%d", &year);
    
    int isLeap = year%4 == 0 && (year%100 != 0 || 
        (year%100 == 0 && year%400 ==0)
        );
    if(isLeap)
        printf("year %d is Leap-year\n", year);
    else
        printf("year %d is NOT Leap-year\n", year);
    
    return 0;
}
