#include <stdio.h>

int main()
{
    // introduction to pointer
    int n=10;
    int *p=&n;
    printf("n=%d\n",n);
    *p=20;
    printf("n=%d\n",n);


    // pointer to a pointer
    int b=5, c=7;
    int *bp=&b, **cp=&bp;
    printf("b=%d, c=%d\n",b,c);
    **cp=30;
    printf("b=%d, c=%d\n",b,c);
    *cp=&c;
    *bp=10;
    printf("b=%d, c=%d\n",b,c);


    // pointers and arrays
    int a[]={23,4,3,9,12};
    int *q=&a[0];
    for(int i=0; i<5; i++)
        printf("%d ",a[i]);
    printf("\n");
    
    *q=2;
    for(int i=0; i<5; i++)
        printf("%d ",a[i]);
    printf("\n");
    
    *(q+1)=3;
    for(int i=0; i<5; i++)
        printf("%d ",a[i]);
    printf("\n");
    
    q[3]=10;
    for(int i=0; i<5; i++)
        printf("%d ",a[i]);
    printf("\n");
    
    printf("q[3]-q[1]=%d\n",q[3]-q[1]); // difference in values
    
    int *x=&q[3], *y=&q[1];
    printf("x-y=%d\n",x-y); // no. of elements in between

    return 0;
}