#include <stdio.h>

/* Write a program to calculate area of a circle using function. */

float cal_area(float r);

int main()
{
    float area, radius;
    printf("\n Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = cal_area(radius);
    printf("\n Area of the circle with radius %.2f = %.2f", radius, area);
    return 0;
}

float cal_area(float radius)
{
    return (3.14 * radius * radius);
}