/******************************
Write a C program that does the following:
a) Read two positive floating point numbers A and B that represent the length of the sides of two lines at 
right angle to each other. Print them. Then calculate the length of the hypotenuse or diagonal Q as per 
Baudhayana / Pythagoras Theorem and print it.
b) Read a third positive floating point number C. Print it. Then print Hypotenuse = 1 if the third number is 
the length of the diagonal of the first two (namely A and B) as per Baudhayana / Pythagoras Theorem. 
Otherwise print Hypotenuse = 0.
c) Read three more floating point numbers D, E and F and print them. Find if some combination of D, E, F 
form three sides of a right angle as per Baudhayana / Pythagoras Theorem. In that case print Answer = 1. 
Otherwise print Answer = 0.
*******************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float l1, l2;
    printf("Enter the lengths of the two perpendicular st lines: ");
    scanf("%f %f", &l1, &l2);
    printf("The lengths of the two perpendicular st lines are %f and %f\n", l1, l2);

    float hyp = sqrt(l1*l1 + l2*l2);
    printf("The req length of hypotenuse is: %f\n", hyp);

    float l3;
    printf("Enter a 3rd floating point no.: ");
    scanf("%f", &l3);
    int check = (l3 == hyp);
    printf("The 3rd floating point number is: %f and the hyp is %d\n", l3, check);

    float d, e, f;
    printf("Enter three floating point no.s: ");
    scanf("%f %f %f", &d, &e, &f);
    printf("Your 1st input is: %f\n", d);
    printf("Your 2nd input is: %f\n", e);
    printf("Your 3rd input is: %f\n", f);
    float largest = (d*(d>e && d>f) + e*(e>d && e>f) + f*(f>d && f>e))  *  (d!=e && d!=f && e!=f) +
                                                   (d*(d>f) + f*(f>d))  *  (d==e && d!=f && e!=f) +
                                                   (d*(d>e) + e*(e>d))  *  (d!=e && d==f && e!=f) +
                                                   (d*(d>f) + f*(f>d))  *  (d!=e && d!=f && e==f) +
                                                                   (d)  *  (d==e && d==f && e==f);
    int ans = (largest == d && largest == sqrt(e*e + f*f)) +
              (largest == e && largest == sqrt(d*d + f*f)) +
              (largest == f && largest == sqrt(d*d + e*e));
    printf("Answer = %d\n", ans);

    return 0;
}