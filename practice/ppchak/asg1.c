/********************************
Write a C Program that will do the following:
1. Read three integers P, Q, R and print them suitably.
2. Find the average of three numbers and print the average.
3. Determine how many are positive and how many are negative and print the number of positive 
and negative integers suitably.
4. Find the largest of the three numbers and print the largest value.
*********************************/

#include <stdio.h>

int main()
{
    int p, q, r;
    printf("Enter three no.s: ");
    scanf("%d %d %d", &p, &q, &r);
    printf("Your 1st input is: %d\n", p);
    printf("Your 2nd input is: %d\n", q);
    printf("Your 3rd input is: %d\n", r);

    float avg = (p+q+r)/3.0;            // 3.0 makes the compiler understand that we want calc in floating pts
    printf("The average is: %f\n", avg);

    int pos = 0;
    pos = (p>0) + (q>0) + (r>0);
    printf("From the input, %d no.(s) are +ve and %d no.(s) are -ve.\n", pos, 3-pos);

    int largest = 0;
    largest = (p*(p>q && p>r) + q*(q>p && q>r) + r*(r>p && r>q))  *  (p!=q && p!=r && q!=r) +
                                             (p*(p>r) + r*(r>p))  *  (p==q && p!=r && q!=r) +
                                             (p*(p>q) + q*(q>p))  *  (p!=q && p==r && q!=r) +
                                             (p*(p>r) + r*(r>p))  *  (p!=q && p!=r && q==r) +
                                                             (p)  *  (p==q && p==r && q==r);
    printf("The largest no. is: %d\n", largest);

    return 0;
}