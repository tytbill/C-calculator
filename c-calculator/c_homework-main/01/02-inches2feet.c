/**
 * inches2feet.c
 * Convert inches to feet.
 * for example:
 * 1024 inches is equal to 85.3333 feet
 *
 */

#include <stdio.h>

// TODO: write a inches2feet function to do this.

int main(void)
{
    double inches = 1024.0;
    double feet = 0.0;

    feet = inches2feet(inches);
    printf("%.3f inches is equal to %.3f feet\n", inches, feet); 

    return 0;
}
