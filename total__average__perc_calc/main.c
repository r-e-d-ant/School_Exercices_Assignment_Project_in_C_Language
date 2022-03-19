// program to enter marks of five subjects and calculate total, average and percentage.

#include<stdio.h>

void main()
{
    float subj_one, subj_two, subj_three, subj_four, subj_five, total, average, percentage;

    printf("Enter subjects marks: ");

    printf("\none: ");
    scanf("%f", &subj_one);

    printf("\ntwo: ");
    scanf("%f", &subj_two);

    printf("\nthree: ");
    scanf("%f", &subj_three);

    printf("\nfour: ");
    scanf("%f", &subj_four);

    printf("\nfive: ");
    scanf("%f", &subj_five);

    total = subj_one + subj_two + subj_three + subj_four + subj_five;
    average = total / 500;
    percentage = (total * 100) / 500;

    printf("Marks:\n");
    printf("Subject one: %0.1f\n"
           "Subject two: %0.1f\n"
           "Subject three: %0.1f\n"
           "Subject four: %0.1f\n"
           "Subject five: %0.1f\n", subj_one, subj_two, subj_three, subj_four, subj_five);
    printf("Total: %0.1f\nAverage: %0.1f\nPercentage: %0.1f", total, average, percentage);
}