#include<stdio.h>

void main()
{
    int a, b;

    // ask for numbers
    // 1st number will be stored in 'a' variables and 2nd number in 'b' variable
    printf("Please enter two numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    // calculate and show the result

    // Addition
    printf("The sum of %d and %d is: %d", a, b, a + b);

    // Soustraction
    printf("\nThe difference of %d and %d is: %d", a, b, a - b);

    // Product
    printf("\nThe product of %d and %d is: %d", a, b, a * b);

    // Division
    printf("\nThe division of %d and %d is: %d", a, b, a / b);
}
