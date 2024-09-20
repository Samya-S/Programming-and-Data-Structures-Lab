#include<stdio.h>

int main()
{
    int n=5;
    int arr[5], i, j;
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    
    printf ("The array is: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ", arr[i]);
    }

    return 0;
}