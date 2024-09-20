#include<stdio.h>

int main()
{
    int n=5;
    int arr[5], i;
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int counter = 1;
    while (counter < n)
    {
        for (i=0; i<n-counter; i++)
        {
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }


    printf ("The array is: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ", arr[i]);
    }

    return 0;
}
