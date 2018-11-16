// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <limits.h>
#include <float.h>

void numeric_type_overflow_info(void);
void float_type_common_info(void);
void float_common_tests(void);
void float_type_overflow_info(void);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    numeric_type_overflow_info();
    printf("\n\n");
    //float_type_common_info();
    // printf("\n\n");
    float_type_overflow_info();

    printf("\nFinish Program!\n");
    return 0;
}

void numeric_type_overflow_info(void)
{
    
    signed char max_char = SCHAR_MAX;
    signed char min_char = SCHAR_MIN;
    unsigned char max_uchar = UCHAR_MAX;

    signed short max_short = SHRT_MAX;
    signed short min_short = SHRT_MIN;
    unsigned short max_ushort = USHRT_MAX;

    signed int max_int = INT_MAX;
    signed int min_int = INT_MIN;
    unsigned int max_uint = UINT_MAX;

    signed long max_long = LONG_MAX;
    signed long min_long = LONG_MIN;
    unsigned long max_ulong = ULONG_MAX;

    signed long long max_llong = LLONG_MAX;
    signed long long min_llong = LLONG_MIN;
    unsigned long long max_ullong = ULLONG_MAX;

    printf("--------------------------------------\n");
    printf("INTEGER VALUES AND EXPERIMENT WITH ITs\n");
    printf("--------------------------------------\n\n");
    printf("MAX SIGNED VALUES:\n char = %d, short = %hd, int = %d, long = %ld, llong = %lld\n",
            max_char, max_short, max_int, max_long, max_llong
    );
    printf("MIN SIGNED VALUES:\n char = %d, short = %hd, int = %d, long = %ld, llong = %lld\n",
            min_char, min_short, min_int, min_long, min_llong
    );

    printf("MAX UNSIGNED VALUES:\n uchar = %u, ushort = %hu, uint = %u, ulong = %lu, "
           "ullong = %llu\n", max_uchar, max_ushort, max_uint, max_ulong, max_ullong
    );
    
    
    printf("\nINCREMENT MAX SIGNED:\n char = %d, short = %hd, int = %d, long = %ld,"
            " llong = %lld\n",
           (signed char)(max_char + (signed char)1),
           (signed short)(max_short + (signed short)1),
           max_int + 1, max_long + 1L, max_llong + 1LL
    );
    
    printf("\nDECREMENT MIN SIGNED:\n char = %d, short = %hd, int = %d, long = %ld,"
            " llong = %lld\n",
           (signed char)(min_char - (signed char)1),
           (signed short)(min_short - (signed short)1), 
           min_int - 1, min_long - 1L, min_llong - 1LL
    );

    printf("\nINCREMENT MAX UNSIGNED:\n char = %u, short = %hu, int = %u, long = %lu,"
           " llong = %llu\n",
           (unsigned char)(max_uchar + (unsigned char)1),
           (unsigned short)(max_ushort + (unsigned short)1),
           max_uint + 1u, max_ulong + 1UL, max_ullong + 1ULL
    );
}

void float_type_overflow_info(void)
{
    // Maximum positive floating-point number
    float f_max = FLT_MAX;
    double d_max = DBL_MAX;
    long double ld_max = LDBL_MAX;

    // Minimum positive floating-point number
    float f_min = FLT_MIN;
    double d_min = DBL_MIN;
    long double ld_min = LDBL_MIN;

    // Minimum positive values including subnormal
    float f_true_min = FLT_TRUE_MIN;
    double d_true_min = DBL_TRUE_MIN;
    long double ld_true_min = LDBL_TRUE_MIN;

    // Floating-point epsilon: minimum step between neighbor float numbers
    float f_epsilon = FLT_EPSILON;
    double d_epsilon = DBL_EPSILON;
    long double ld_epsilon = LDBL_EPSILON;

    printf("------------------------\n");
    printf("FLOAT VALUES OVERFLOW INFO\n");
    printf("------------------------\n\n");
    printf("Maximum positive float numbers:\n\tfloat = %f\n\tdouble = %f\n\tldouble = %Lf\n",
           f_max, d_max, ld_max
    );
    printf("Increment maximum positive float numbers by epsilon:"
           "\n\tfloat = %f\n\tdouble = %f\n\tldouble = %Lf\n",
           (float)(f_max + f_epsilon), d_max + d_epsilon, ld_max + ld_epsilon
    );
    printf("Multiply by 2.0 maximum positive float numbers:"
           "\n\tfloat = %f\n\tdouble = %f\n\tldouble = %Lf\n",
           (float)(f_max * 2.0F), d_max * 2.0, ld_max * 2.0L
    );
    printf("Decrement minimum (normal) positive float numbers by epsilon:"
           "\n\tfloat = %.100f\n\tdouble = %.100f\n\tldouble = %.100Lf\n",
           (float)(f_min - f_epsilon), d_min - d_epsilon, ld_min - ld_epsilon
    );
    printf("Decrement minimum (subnormal) positive float numbers by epsilon:"
           "\n\tfloat = %.100f\n\tdouble = %.100f\n\tldouble = %.100Lf\n",
           (float)(f_true_min - f_epsilon), d_true_min - d_epsilon, ld_true_min - ld_epsilon
    );

}

void float_type_common_info(void)
{
    float_common_tests();
}

void float_common_tests(void)
{
    // Value of Base of Counting System
    int radix = FLT_RADIX;
    // Count of digit in mantissa in Counting System with base Radix
    int f_m_dgt_cnt = FLT_MANT_DIG;
    int d_m_dgt_cnt = DBL_MANT_DIG;
    int ld_m_dgt_cnt = LDBL_MANT_DIG;

    // Count of decimal digits, that can be represent in according mantissa
    int f_dec_dgt_cnt = FLT_DIG;
    int d_dec_dgt_cnt = DBL_DIG;
    int ld_dec_dgt_cnt = LDBL_DIG;

    // Minimum degree of Radix which correctly placed in float-type cell
    int f_min_exp = FLT_MIN_EXP;
    int d_min_exp = DBL_MIN_EXP;
    int ld_min_exp = LDBL_MIN_EXP;

    // Minimum degree of 10 which correctly placed in float-type cell
    int f_min_exp_10 = FLT_MIN_10_EXP;
    int d_min_exp_10 = DBL_MIN_10_EXP;
    int ld_min_exp_10 = LDBL_MIN_10_EXP;

    // Maximum positive floating-point number
    float f_max = FLT_MAX;
    double d_max = DBL_MAX;
    long double ld_max =LDBL_MAX;

    // Minimum positive floating-point number
    float f_min = FLT_MIN;
    double d_min = DBL_MIN;
    long double ld_min = LDBL_MIN;

    // Minimum positive values including subnormal
    float f_true_min = FLT_TRUE_MIN;
    double d_true_min = DBL_TRUE_MIN;
    long double ld_true_min = LDBL_TRUE_MIN;

    // Floating-point epsilon: minimum step between neighbor float numbers
    float f_epsilon = FLT_EPSILON;
    double d_epsilon = DBL_EPSILON;
    long double ld_epsilon = LDBL_EPSILON;
    
    printf("------------------------\n");
    printf("FLOAT VALUES COMMON INFO\n");
    printf("------------------------\n\n");
    printf("Radix = %d\n", radix);
    printf("Mantissa lengthes in digit base by Radix:\nfloat = %d, double = %d, ldouble = %d\n",
           f_m_dgt_cnt, d_m_dgt_cnt, ld_m_dgt_cnt
    );
    printf("Count of decimal digit that can be represent in according mantissa:\n"
           "float = %d, double = %d, ldouble = %d\n",
           f_dec_dgt_cnt, d_dec_dgt_cnt, ld_dec_dgt_cnt
    );
    printf("Min exponent of Radix when result Radix^Min_Exp still normalize:"
           "\nfloat = %d, double = %d, ldouble = %d\n",
           f_min_exp, d_min_exp, ld_min_exp
    );
    printf("Min exponent of 10 when result 10^Min_Exp still normalize:"
           "\nfloat = %d, double = %d, ldouble = %d\n",
           f_min_exp_10, d_min_exp_10, ld_min_exp_10
    );
    printf("Maximum positive float numbers:\n\tfloat = %f\n\tdouble = %f\n\tldouble = %lf\n",
           f_max, d_max, ld_max
    );
    printf("Minimum(normal) positive float numbers:\n\tfloat = %.100f\n\tdouble = %.100f\n\t"
           "ldouble = %.100lf\n",
           f_min, d_min, ld_min
    );
    printf("Minimum(including subnormal) positive float numbers:\n\tfloat = %.100f\n\t"
           "double = %.100f\n\tldouble = %.100lf\n",
           f_true_min, d_true_min, ld_true_min
    );
    printf("Epsilon value for float numbers:\n\tfloat = %.100f\n\tdouble = %.100f\n\t"
           "ldouble = %.100lf\n",
           f_epsilon, d_epsilon, ld_epsilon
    );
}
