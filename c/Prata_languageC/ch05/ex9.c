// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

double input_temperature(const char input_str[], int* ret_val);
void Temperatures(double f);
int main(void)
{
    const char greeting_str[] = "Thist program input temperature in F scale and print all (K, C, F) values";
    const char input_temperature_str[] = "Input temperature in Fahrenheit (press 'q' to quit): ";
    double far;
    int ret_symb = -1;
    printf("Start Program\n\n");
    // program here
    printf("%s\n", greeting_str);
    far = input_temperature(input_temperature_str, &ret_symb);
    while(ret_symb > 0) {
        Temperatures(far);
        far = input_temperature(input_temperature_str, &ret_symb);
    }
    printf("\nFinish Program!\n");
    return 0;
}

double input_temperature(const char input_str[], int *ret_val)
{
    double input_temp = 0.;
    *ret_val = 0;
    printf("%s", input_str);
    *ret_val = scanf("%lf", &input_temp);
    return input_temp;
}

void Temperatures(double f)
{
    static const char c_head[] = "Celsius";
    static const char f_head[] = "Fahrenheit";
    static const char k_head[] = "Kelvin";
    static size_t c_width = sizeof(c_head) + 1;
    static size_t f_width = sizeof(f_head) + 1;
    static size_t k_width = sizeof(k_head) + 1;
    double c = 5. / 9. * (f - 32.);
    double k = c + 273.16;
    
    printf("%*s %*s %*s\n", c_width, c_head, f_width, f_head, k_width, k_head);
    printf("%*.2f %*.2f %*.2f\n", c_width, c, f_width, f, k_width, k);
}
