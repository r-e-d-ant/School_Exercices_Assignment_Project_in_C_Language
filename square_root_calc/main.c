// Program to enter any number and calculate its square root.

#include<stdio.h>
#include<math.h>

void main()
{
    float number, square_root;

    printf("Enter a number to calculate the square root: ");
    scanf("%f", &number);

    // we use C built in library (sqrt) to calculate square root of any number
    square_root = sqrt(number);
    printf("The square of %0.1f is: %0.1f", number, square_root);
}