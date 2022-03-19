// program to convert days into years, and weeks.

#include<stdio.h>

void main()
{
    int days, years, weeks;

    printf("Enter days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = days / 7;

    printf("%d days is: \n %d years \n %d weeks", days, years, weeks);
}