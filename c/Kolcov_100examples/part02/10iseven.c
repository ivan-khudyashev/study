// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    int number;
    printf("Input integer: ");
    scanf("%d", &number);

    if(number %2 == 0)
      printf("%d is even\n", number);
    else
      printf("%d is UNeven\n", number);
 
    return 0;
}
