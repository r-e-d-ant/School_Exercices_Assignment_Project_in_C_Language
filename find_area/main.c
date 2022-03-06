#include<stdio.h>

void main()
{
    int length, width, area;

    // length
    printf("Enter length: ");
    scanf("%d", &length);

    // width
    printf("Enter width: ");
    scanf("%d", &width);

    // area
    // formula: area = width * length
    area = length * width;
    printf("The area is: %d m", area);
}
