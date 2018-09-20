// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    if(n == 0)
        printf("You have inputed zero :|\n");
    else if (n < 0)
        printf("You have inputed negative number :(\n");
    else 
        printf("You have inputed POSITIVE number :)\n");
 
    return 0;
}
