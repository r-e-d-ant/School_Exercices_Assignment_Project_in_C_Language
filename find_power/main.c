#include<stdio.h>
void main()
{
    int number, no_power, power, calculated_power;

    // ask number
    printf("Enter any number and i give you it's power: ");
    scanf("%d", &number);

    // ask number to power
    printf("%d^", number);
    scanf("%d", &no_power);

    // assign number to power into another variable
    calculated_power = number;

    // loop into numbers to power the number
    // while re-multiply the given number
    for (power = 1; power < no_power; power++) {
            calculated_power = calculated_power * number;
    }
    printf("%d^%d = %d", number, no_power, calculated_power);
    printf("\n");
    return;
}
