/*Find largest contiguous sequence of equal numbers*/

#include <stdio.h>

int main(){
    int a[20], n;

    printf("n = ");
    scanf("%d", &n); //int n=10;

    printf("a[] = ");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]); //int a[]={1,2,2,2,3,4,4,4,4,7};
    
    printf("a[%d] = ", n);
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    
    int seqStart=0, start=0, seqLength=1, length=1;

    for (int i=0; i<n; i++){
        if(a[i]==a[i+1])
            start = i;

        while(a[i]==a[i+1] && i+1<n){
            length++;
            i++;
        }

        seqStart = (start > seqStart && length > seqLength) ? start : seqStart;
        seqLength = (length > seqLength) ? length : seqLength;
        length=1; 
    }

    if(seqLength > 1) 
        printf("\nSequence starting from a[%d] of length = %d, value = %d", seqStart, seqLength, a[seqStart]);
    else
        printf("\nAll values repeat only once!");

    // for 1,2,2,3,4,4.....largest seq considered will be : 2,2 (i.e. the 1st largest seq if multiple seq have same lengths)

    return 0;
}