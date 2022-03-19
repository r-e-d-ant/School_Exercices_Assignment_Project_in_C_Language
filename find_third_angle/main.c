// program to enter two angles of a triangle and find the third angle.

#include<stdio.h>

void main()
{
    float angle_one, angle_two, sum_of_angles, third_angle;

    printf("Enter angle one: ");
    scanf("%f", &angle_one);

    printf("Enter angle two: ");
    scanf("%f", &angle_two);

    sum_of_angles = angle_one + angle_two;
    third_angle = 180 - sum_of_angles;

    printf("The third angle is: %0.1f", third_angle);
}