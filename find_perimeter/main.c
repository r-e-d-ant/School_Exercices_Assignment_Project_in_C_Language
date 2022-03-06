#include<stdio.h>

void main()
{
    int length, breadth, perimeter;

    // length
    printf("Enter length: ");
    scanf("%d", &length);

    // breadth
    printf("Enter breadth: ");
    scanf("%d", &breadth);

    // calculate perimeter
    // formula: P = length + breadth + length + breadth
    perimeter = length + breadth + length + breadth;
    printf("The perimeter of this rectangle is: %d m", perimeter);
    printf("\n");
    return;
}
