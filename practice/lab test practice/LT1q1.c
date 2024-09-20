/************************
Write a C program which reads a sequence of integers (terminated by -1) 
and find the 1st max, 2nd max and 3rd max no.s (excluding -1) that have been entered
*************************/

#include <stdio.h>

int main(){
    int n, max1=0, max2=0, max3=0;
    // scanf("%d", &n);

    // while(n==-1){
    //     printf("Invalid input! 1st input should not be -1. Please re-enter the 1st input: ");
    //     scanf("%d", &n);
    // }
    
    // max1 = n;

    do{
        scanf("%d", &n);

        int lastMax1 = max1, lastMax2 = max2;

        // for 5 5 5 -1 ... to get output max1 = 5, max2 = 0, max3 = 0 :-
        max1 = max1*(max1>=n) + n*(n>max1);
        max2 = max2*(lastMax1==max1 && ((max2>=n) || (n==lastMax1)) /*or ((max2>=n)*(n!=lastMax1) + (1)*(n==lastMax1)) */) + 
               lastMax1*(lastMax1<max1 && lastMax1>=max2) + 
               n*(n>max2 && n<max1);
        max3 = max3*(lastMax1==max1 && lastMax2==max2 && ((max3>=n) || (n==lastMax2) || (n==lastMax1))) + 
               lastMax2*(lastMax2<max2 && lastMax2>=max3) + 
               n*(n>max3 && n<max1 && n<max2);



        // for 5 5 5 -1 ... to get output max1 = 5, max2 = 5, max3 = 5 :-        // incomplete
        // max1 = max1*(max1>=n) + n*(n>max1);
        // int cond1;
        // max2 = n*(cond1=(((n>max2) || (max1==max2)) && ((n<max1)*(max2!=0) || (n<=max1)*(max2==0)) /*n<max1*/)) + 
        //        max2*(!cond1)*(lastMax1==max1 && ((max2>=n) || (n==lastMax1)) /*or ((max2>=n)*(n!=lastMax1) + (1)*(n==lastMax1)) */) + 
        //        lastMax1*(!cond1)*(lastMax1<max1 && lastMax1>=max2);
        // int max3_ = (max3*(lastMax1==max1 && lastMax2==max2 && ((max3>=n) || (n==lastMax2))) + 
        //        lastMax2*(lastMax2<max2 && lastMax2>=max3) + 
        //        n*(n>max3 && ((n<max1 && n<max2)*(max3!=0) || (n<=max1 && n<=max2)*(max3==0))/*n<max1 && n<max2*/));
        // max3 = (max2*(max3_==0)*(max2!=0) || max3);


        // printf("max1 = %d, max2 = %d, max3 = %d\n", max1, max2, max3);


    } while(n!=-1);
    
    printf("max1 = %d, max2 = %d, max3 = %d\n", max1, max2, max3);

    return 0;
}