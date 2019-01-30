// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const float bits_in_byte = 8.;
    float speed_Mbps, filesize_MB;
    printf("Start Program\n\n");
    // program here
    printf("Input filesize in MegaBytes in speed in Megabits per second.\n");
    printf("filesize(in MB) = ");
    scanf("%f", &filesize_MB);
    printf("speed (in Mbps) = ");
    scanf("%f", &speed_Mbps);
    printf("By speed %.2f megabit per second file with size %.2f megabytes would load "
            "%.2f second(s)\n", speed_Mbps, filesize_MB, filesize_MB * bits_in_byte / speed_Mbps );

    printf("\nFinish Program!\n");
    return 0;
}
