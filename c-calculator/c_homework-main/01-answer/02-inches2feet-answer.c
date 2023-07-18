/**
 * inches2feet.c
 * Convert inches to feet.
 * for example:
 * 1024 inches is equal to 85.3333 feet
 *
 * write a inches2feet function to do this.
 */

#include <stdio.h>

double inches2feet(double inches)
{
    double someFeet = inches / 12.0;
    return someFeet;
}

int main(void)
{
    double inches = 1024.0;
    double feet = 0.0;

    feet = inches2feet(inches);
    printf("%.3f inches is equal to %.3f feet\n", inches, feet); 

    return 0;
}
