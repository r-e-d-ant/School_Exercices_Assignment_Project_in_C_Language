#include<stdio.h>
void main()
{
    float length_in_cm, length_in_m, length_in_km;

    printf("Enter length in cm: ");
    scanf("%f", &length_in_cm);

    length_in_m = length_in_cm / 100;
    length_in_km = length_in_cm / 100000;

    printf("%0.1f cm in m is: %0.1f\n", length_in_cm, length_in_m);
    printf("%0.1f cm in km is: %f\n", length_in_cm, length_in_km);
    return;
}
