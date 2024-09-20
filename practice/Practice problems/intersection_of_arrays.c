//C program to find the intersection of two arrays

#include <stdio.h>

#define SIZE 50

int intersection_of_2_arrays(int arr1[],int arr1_size, int arr2[],int arr2_size, int arr3[]){
    int k=0, flag=0;

    for(int i=0; i<arr1_size; i++){
        for(int j=0; j<arr2_size;j++){
            if(arr1[i]==arr2[j]){
                arr3[k]=arr1[i];
                k++;
                flag=1;
                // printf("arr1[%d]=arr2[%d]=%d\n",i,j,arr1[i]);
                break;
            }
            // else
                // printf("arr1[%d]=%d != arr2[%d]=%d\n",i,arr1[i], j,arr2[j]);
        }
        //if (flag==1){
            // printf("flag is 1\n");
            flag=0;
            //break;
        //}
    }

    return k;
}

int main(){
    int a[]={1,2,3,4,5,6}, b[]={2,4,5,7,9};
    int c[SIZE];

    int a_n=sizeof(a)/sizeof(int);
    int b_n=sizeof(b)/sizeof(int);
    // printf("a_n=%d b_n=%d\n",a_n,b_n);

    int c_n=intersection_of_2_arrays(a,a_n, b,b_n, c);

    if(SIZE<c_n){
        printf("Insufficient array storage space!\n");
        return 2;
    }

    // printing a[]
    printf("a[] = ");
    for(int i=0; i<a_n; i++)
        printf("%d ",a[i]);
    printf("\n");
    
    // printing b[]
    printf("b[] = ");
    for(int i=0; i<b_n; i++)
        printf("%d ",b[i]);
    printf("\n");


    if(c_n==0){
        printf("No values are common in the two arrays.");
        return 1;
    }
    

    // printing intersection array
    printf("The intersection array is : c[] = ");
    for(int i=0; i<c_n; i++)
        printf("%d ",c[i]);
    printf("\n");


    return 0;
}