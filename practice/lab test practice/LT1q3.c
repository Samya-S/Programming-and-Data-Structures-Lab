/************************
Write a C program to find the sum of the following series until the absolute difference 
between (n-1)th term and the n th term value is less than 0.00001.
The output should print the term n and sum of the series (S).

S = 1 - 1/3 + 1/9 - 1/27 + 1/81 - .....
*************************/

#include <stdio.h>

double mod(double n){
    n = n*(n>0) - n*(n<0);
    return n;
}

int main(){
    double nth_term=1.0,n_1th_term=0, S=0;
    S=S+nth_term;
    // printf("nth_term = %lf, S = %lf\n", nth_term, S);

    do{
        n_1th_term = nth_term;
        nth_term = nth_term * (-1) * (1/3.0);
        S = S + nth_term;
        // printf("nth_term = %lf, S = %lf\n", nth_term, S);
    } while (mod(n_1th_term) - mod(nth_term) >= 0.00001);

    printf("S = %lf\n", S);

    return 0;
}