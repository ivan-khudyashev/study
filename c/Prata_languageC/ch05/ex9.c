// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

double input_temperature(const char input_str[], int* ret_val);
void Temperatures(double f);
int main(void)
{
    const char GREETING_STR[] = "Thist program input temperature in F scale and print all (K, C, F) values";
    const char INPUT_TEMPERATURE_STR[] = "Input temperature in Fahrenheit (press 'q' to quit): ";
    double far;
    int ret_symb = -1;
    printf("Start Program\n\n");
    // program here
    printf("%s\n", GREETING_STR);
    far = input_temperature(INPUT_TEMPERATURE_STR, &ret_symb);
    while(ret_symb > 0) {
        Temperatures(far);
        far = input_temperature(INPUT_TEMPERATURE_STR, &ret_symb);
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
    static const char C_HEAD[] = "Celsius";
    static const char F_HEAD[] = "Fahrenheit";
    static const char K_HEAD[] = "Kelvin";
    static size_t c_width = sizeof(C_HEAD) + 1;
    static size_t f_width = sizeof(F_HEAD) + 1;
    static size_t k_width = sizeof(K_HEAD) + 1;
    double c = 5. / 9. * (f - 32.);
    double k = c + 273.16;
    
    printf("%*s %*s %*s\n", c_width, C_HEAD, f_width, F_HEAD, k_width, K_HEAD);
    printf("%*.2f %*.2f %*.2f\n", c_width, c, f_width, f, k_width, k);
}
