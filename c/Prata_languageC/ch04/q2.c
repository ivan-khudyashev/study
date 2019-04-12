// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char Q[50] = "His Hamlet was funny without being vulgar";
    
    printf("Start Program\n\n");
    // program here
    printf("a) He sold the painting for $%2.2f.\n", 2.345e2);
    printf("b) %c%c%c\n", 'H', 105, '\41');
    printf("c)%s\n\thas %d characters.\n", Q, strlen(Q));
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);

    printf("\nFinish Program!\n");
    return 0;
}
