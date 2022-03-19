// Program to enter base and height of a triangle and find its area.

#include<stdio.h>

void main()
{
    int base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%d", &base);

    printf("Enter height of the triangle: ");
    scanf("%d", &height);

    // calculate the area
    area = (height * base) / 2;

    printf("The ara the triangle is: %d", area);
}