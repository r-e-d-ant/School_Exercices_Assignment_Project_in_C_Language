// program to calculate area of an equilateral triangle.
#include<stdio.h>
#include<math.h>

void main()
{
    float area;

    printf("Enter an area of a triangle: ");
    scanf("%f", &area);

    // calculate area of an equilateral triangle using sqrt of 3 divided by 4 times area power 2
    area = (sqrt(3)/4) * (area * area);

    printf("Area of an equilateral triangle is: %0.1f", area);
}