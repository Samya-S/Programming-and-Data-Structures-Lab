//Write a C program to find the total number of non-repeated elements of an array
//                           and total of non-repeated elements of an array

#include <stdio.h>

#define SIZE 50

int main(){
    int a[]={4,1,2,2,2,3,3,5,6,7,4};

    int a_n = sizeof(a)/sizeof(int);

    printf("a[%d] = ",a_n);
    for(int i=0; i<a_n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    //-------INCORRECT-------
    
    /*int k=a_n;
    printf("k=%d\n",k);

    int count=0;
    for(int i=0; i<a_n; i++){
        for(int j=0; j<a_n; j++){
            if(j>i){
                if(a[i]==a[j]){
                    printf("a[%d]=%d==a[%d]=%d\n",i,a[i],j,a[j]);
                    count++;
                }
            }
        }
    }
    printf("count=%d\n",count);*/

    int b[SIZE],k=0;

    for(int i=0; i<a_n; i++){
        int flag=0;
        for(int j=0; j<a_n; j++){
            if(b[j]==a[i])
                flag=1;
        }
        if (flag==0){
            b[k]=a[i];
            printf("b[%d] = %d\n",k,b[k]);
            k++;
        }
    }

    printf("The total number of non-repeated elements of the array is %d\n", k+1);

    //-------INCORRECT-------

    /*int sum=0;
    for(int i=0; i<a_n; i++){
        sum=sum+a[i];
    }
    printf("sum=%3d\n", sum);
    for(int i=0; i<a_n; i++){
        for(int j=0; j<a_n && j!=i; j++){
            if(a[i]==a[j]){
                sum=sum-a[i];
            //if(a[i]!=a[j]){
                //sum=sum+a[j];
                printf("sum=%3d\n", sum);
            }
        }
    }*/

    printf("b[%d] = ",k+1);
    for(int i=0; i<k; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    int sum=0;
    for(int i=0; i<k; i++)
        sum=sum+b[i];

    printf("The total of non-repeated elements of the array is %d\n", sum);
    
    return 0;
}