// program to enter P, T, R and calculate Simple Interest.
#include<stdio.h>

void main()
{
    float p, r, t, simple_interset;

    printf("Enter Principal(P): ");
    scanf("%f", &p);

    printf("Enter Rate(R): ");
    scanf("%f", &r);

    printf("Enter Time(T): ");
    scanf("%f", &t);
    /*
     Calculation:
     First, converting R percent to r a decimal
     r = R/100 = 3.875%/100 = 0.03875 per year.

     Solving our equation:
     A = P(1 + (r × t))
     */
    r = r / 100;
    simple_interset = p * (1 + (r * t));
    printf("The total amount accrued,\n"
           "principal plus interest,\n"
           "from simple interest on a principal of $ %0.1f\n"
           "at a rate of r %0.1f per year for %0.1f years is $ %0.1f .", p, r, t, simple_interset);
}