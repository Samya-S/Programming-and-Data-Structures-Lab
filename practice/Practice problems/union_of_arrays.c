//C program to find the union of two arrays


#include <stdio.h>

#define SIZE 50

int union_of_2_arrays(int a[], int a_n, int b[], int b_n, int c[]){
    int k=-1;
    
    for(int i=0; i<a_n; i++){
        c[i]=a[i];
        k++;
    }
    
    for(int i=0; i<b_n; i++){
        int flag=0;
        for(int j=0; j<a_n; j++){
            if(b[i]==a[j]){
                flag=1;
            }
        }
        if(flag==0){
            k++;
            c[k]=b[i];
        }
    }

    return k+1;
}

int main(){
    int a[]={1,2,3,4,5,6}, b[]={2,4,5,7,9};
    int c[SIZE];

    int a_n=sizeof(a)/sizeof(int);
    int b_n=sizeof(b)/sizeof(int);

    int c_n=union_of_2_arrays(a,a_n, b,b_n, c);

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


    // printing union array
    printf("The union array is : c[] = ");
    for(int i=0; i<c_n; i++)
        printf("%d ",c[i]);
    printf("\n");


    return 0;
}