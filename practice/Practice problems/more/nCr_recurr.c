#include <stdio.h>

int nCr(int N, int R){
    // if (R==0 || N==R) return 1;
    // else if (R==1 || N==R+1) return N;
    // else return nCr(N-1, R-1) + nCr(N-1, R);

    //OR

    if (R>N/2) R = N-R;  // nCr(n,r) = nCr(n,n-r)

    if (R==0) return 1;          //base case 1
    else if (R==1) return N;     //base case 2
    else return nCr(N-1, R-1) + nCr(N-1, R);
}

int main(){
    int n=8, r=3;
    
    printf("The value of nCr for n = %d and r = %d is %d", n, r, nCr(n,r));

    return 0;
}