#include <stdio.h>

int gcd(int m, int n){
    if (m<n){
        int temp = m;
        m = n;
        n = temp;
    }

    //now m>n

    //by Euclid's algorithm
    if (n>0) return gcd(n,m%n); 
    else return m; //base case
}

int main(){
    int a=21, b=15;

    printf("The gcd of %d and %d is %d", a, b, gcd(a,b));

    return 0;
}