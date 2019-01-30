// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

#define xstr_macro(x) str_macro(x)
#define str_macro(x) #x

#define BUFFER_LEN 30

int main(void)
{
    char name[BUFFER_LEN + 1];
    float height = 0.;
    float cm_in_inches = 2.54;
    printf("Start Program\n\n");
    // program here
    printf("Input your name and height in cantimeters. Name: ");
    scanf("%" xstr_macro(BUFFER_LEN) "s", name);
    printf("And now height = ");
    scanf("%f", &height);
    printf("%s, you height %.2f inches\n", name, height / cm_in_inches);

    printf("\nFinish Program!\n");
    return 0;
}
