// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int input_m(const char input_m_str[]);
int main(void)
{
    int m,n,r; // (r, d) = m div n, r = m%n, d=m/n
    const char GREETING_STR[] = "This program computes moduli: r = m%n";
    const char INPUT_N_STR[] = "Input n: ";
    const char INPUT_M_STR[] = "Input m (<=0 to quit): ";
    const char ERROR_N_VAL_STR[] = "Wrong n value, must n<>0. Exit!";
    printf("Start Program\n\n");
    // program here
    printf("%s\n%s", GREETING_STR, INPUT_N_STR);
    scanf("%d", &n);
    if(n == 0) {
        printf("%s", ERROR_N_VAL_STR);
        return 1;
    }
    m = input_m(INPUT_M_STR);
    while(m > 0) {
        printf("%d %% %d is %d\n", m, n, m%n);
        m = input_m(INPUT_M_STR);
    }

    printf("\nFinish Program!\n");
    return 0;
}

int input_m(const char input_m_str[])
{
    int m_val = 0;
    printf("%s", input_m_str);
    scanf("%d", &m_val);
    return m_val;
}
