/**
 * Write a function double bmi(double weight_kg, double height_m) that takes weight in kilograms and height in meters, and returns the Body Mass Index (BMI).
 * BMI = weight / (height * height)
 */

#include <stdio.h>

double bmi(double weight_kg, double height_m)
{
    return weight_kg / (height_m * height_m);
}

int main()
{
    printf("bmi(70, 1.8) = %f\n", bmi(70, 1.8));
    return 0;
}
