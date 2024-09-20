#include<stdio.h>

int main()
{
    int n=5;
    int arr[5], i, j;
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (i=1; i<n; i++){
        int current = arr[i];
        j = i-1;
        while (arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }


    printf ("The array is: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ", arr[i]);
    }

    return 0;
}
