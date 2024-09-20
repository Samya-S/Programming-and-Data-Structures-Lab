#include <stdio.h>

int fib(int n){
    switch(n){
        case 0: return 0;
        case 1: return 1;
        default: return fib(n-1) + fib(n-2);
    }        
}

int main(){
    int m;

    printf("Enter the no. of values to print: ");
    scanf("%d", &m);

    for(int i=0; i<=m; i++)
        printf("%d ", fib(i));

    printf("\nEnter the limiting value to print: ");
    scanf("%d", &m);

    for(int i=0; fib(i)<=m; i++)
        printf("%d ", fib(i));

    return 0;
}