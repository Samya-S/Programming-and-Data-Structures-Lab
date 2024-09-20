#include <stdio.h>

// not a tail recursion
// int sum(int x){
//     if (x==0) return 0;
//     return x+sum(x-1);
// }


// tail recursion
int sum(int x, int partialSum){
    if (x==0) return partialSum;
    return sum(x-1, x+partialSum);
}


// alt by iteration
// int sum(int x)
// {
//     int sum=0;    
//     while (x>0){
//         sum=sum+x;
//         x--;
//     }  
//     return sum;
// }


int main()
{
    int n;    
    scanf("%d", &n);    
    printf("Sum = %d\n", sum(n,0));

    return 0;
}