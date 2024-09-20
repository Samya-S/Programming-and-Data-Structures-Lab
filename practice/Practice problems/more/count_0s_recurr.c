//count 0s in a positive number

#include <stdio.h>

// int count_0s(int a){                    // another method
//     static int counter=0;
//     if (a==0) return counter;
//     else{
//         if (a%10==0) counter++;
//         printf("counter = %d\n", counter);
//         count_0s(a/10);
//     }
// }

int count_0s(int a){
    if (a<10) return 0;
    
    if (a%10==0) return 1+count_0s(a/10);
    else return count_0s(a/10);
}

int main(){
    int n=2003306;

    printf("The no. of 0s are = %d", count_0s(n));

    return 0;
}