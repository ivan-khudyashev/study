// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int input_m(const char input_m_str[]);
int main(void)
{
    int m,n,r; // (r, d) = m div n, r = m%n, d=m/n
    const char greeting_str[] = "This program computes moduli: r = m%n";
    const char input_n_str[] = "Input n: ";
    const char input_m_str[] = "Input m (<=0 to quit): ";
    const char error_n_val_str[] = "Wrong n value, must n<>0. Exit!";
    printf("Start Program\n\n");
    // program here
    printf("%s\n%s", greeting_str, input_n_str);
    scanf("%d", &n);
    if(n == 0) {
        printf("%s", error_n_val_str);
        return 1;
    }
    m = input_m(input_m_str);
    while(m > 0) {
        printf("%d %% %d is %d\n", m, n, m%n);
        m = input_m(input_m_str);
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
