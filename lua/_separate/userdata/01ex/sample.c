#include <limits.h>
#include <stdio.h>

#define BITS_PER_WORD   (CHAR_BIT*sizeof(unsigned int))
#define I_WORD(i)   ((unsigned int)(i) / BITS_PER_WORD)
#define I_BIT(i)    (1 << ((unsigned int)(i) % BITS_PER_WORD))

int main(void)
{
    printf("Test some value.\nBITS_PER_WORD = %d\n", BITS_PER_WORD);
    printf("I_WORD(5) = %d, I_WORD(10) = %d, I_WORD(100) = %d, I_WORD(1024) = %d\n", I_WORD(5), I_WORD(10), I_WORD(100), I_WORD(1024));
    return 0;
}
