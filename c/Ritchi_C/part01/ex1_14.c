// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
/*
This program prints frequences on inputed chars.
But only chars: small Latins, big Latins and digits. 
And it skips 0 frequences chars.
*/
#include <stdio.h>
#define LETTER_COUNT 26
#define DIGIT_COUNT 10

void updateFreq(unsigned int freqs[], unsigned char ch,
  unsigned char lower, unsigned char upper) {
    if(ch >= lower && ch <= upper)
        ++freqs[ch - lower];
}

void printFreq(unsigned int freqs[],
  unsigned char lower, unsigned char upper) {
    int len = (int)(upper - lower);
    for(int i = 0; i < len; i++)
        if(freqs[i] > 0)
            printf("%c: %d\n", lower + (unsigned char)i, 
              freqs[i]);
}

int main() {
    
    const int letterCount = LETTER_COUNT;
    const int digitCount = DIGIT_COUNT;
    unsigned int freqSymbSmallLat[LETTER_COUNT];
    unsigned int freqSymbBigLat[LETTER_COUNT];
    unsigned int freqDigits[DIGIT_COUNT];
    char inputChar;
    // Clear initial values for frequences
    for(int i = 0; i < letterCount; i++) {
        freqSymbSmallLat[i] = 0;
        freqSymbBigLat[i] = 0;
    }
    for(int i = 0; i < digitCount; i++)
        freqDigits[i] = 0;

    while((inputChar = getchar()) != EOF ) {
        //printf("Next chars!\n");
        updateFreq(freqSymbSmallLat, (unsigned char)inputChar,
          (unsigned char)'a', (unsigned char)'z');
        updateFreq(freqSymbBigLat, inputChar,
          (unsigned char)'A', (unsigned char)'Z');
        updateFreq(freqDigits, inputChar,
          (unsigned char)'0', (unsigned char)'9');
    }
    
    printFreq(freqSymbSmallLat, 'a', 'z');
    printFreq(freqSymbBigLat, 'A', 'Z');
    printFreq(freqDigits, '0', '9');

    return 0;
}
