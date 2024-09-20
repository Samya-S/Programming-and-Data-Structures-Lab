#include <stdio.h>

int SumOfSquares(int m, int n){
    if (m==n) return m*m; //base condition
    else {
        int mid = (m+n)/2;
        return SumOfSquares(m,mid) + SumOfSquares(mid+1,n);
    }
}

int main(){
    int a=5,b=10;

    printf("Sum = %d", SumOfSquares(a,b));

    return 0;
}