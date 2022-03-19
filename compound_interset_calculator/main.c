// program to enter P, T, R and calculate Simple Interest.

#include<stdio.h>
#include<math.h>

void main()
{
    float p, r, n, t, nt, compound_interset;

    printf("Enter Principal(P): ");
    scanf("%f", &p);

    printf("Enter Rate(R): ");
    scanf("%f", &r);

    printf("Enter Compound(n): ");
    scanf("%f", &n);

    printf("Enter Time(T): ");
    scanf("%f", &t);
    /*
     First, convert R as a percent to r as a decimal
     r = R/100
     e.g: r = 3.875/100
     r = 0.03875 rate per year,

     Then solve the equation for A
     A = P(1 + r/n)^nt
     */
    r = r / 100;
    nt = n * t;
    compound_interset = p * pow((1 + (r/n)), nt);

    printf("The total amount accrued,\n"
           "principal plus interest,\n"
           "with compound interest on a principal of $ %0.1f\n"
           "at a rate of r %f per year compounded %0.1f times per year over"
           "over %0.1f years is $ %0.1f .", p, r, n, t, compound_interset);
}