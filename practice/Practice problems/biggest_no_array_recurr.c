//Write a C Program to find the Biggest Number in an Array of integers (can be negative too) using Recursion

#include <stdio.h>

int mod(int n){
    if (n>0) 
        return n;
    else
        return -n;
}

int biggest_num_in_arr(int arr[], int a_n, int i, int max){
    if(i==0){
        max=arr[0];
        //printf("max=arr{0}=%d\n",max);
        return biggest_num_in_arr(arr,a_n, 1, max);
    }
    else if(i < a_n){
        if(max < mod(arr[i])){
            max = mod(arr[i]);
            //printf("max=%d=arr[%d]=%d\n",max,i,arr[i]);
            return biggest_num_in_arr(arr,a_n, i+1, max);
        }
        else{
            //printf("max=%d!=arr[%d]=%d\n",max,i,arr[i]);
            return biggest_num_in_arr(arr,a_n, i+1, max);
        }
    }
    else
        return max;
}

int main(){
    int a[]={1,3,-9,5,7,15,-25};

    int a_n = sizeof(a)/sizeof(int);

    printf("a[%d] = ",a_n);
    for(int i=0; i<a_n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("The Biggest Number in the Array is %d\n",biggest_num_in_arr(a,a_n, 0, 0));

    return 0;
}