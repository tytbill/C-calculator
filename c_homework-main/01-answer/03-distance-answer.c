/**
 * Write a function double distance(double x1, double y1, double x2, double y2) that takes the coordinates of two points (x1, y1) and (x2, y2) on a 2D plane, and returns the distance between these two points.
 */

#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
    printf("distance(0, 0, 1, 1) = %f\n", distance(0, 0, 1, 1));
    return 0;
}
