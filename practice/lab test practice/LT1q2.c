/************************
Write a C program which accepts the no. of rows as input and print the output as following:

for input 5:
   1
  123
 12345
  123
   1
*************************/
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<=n; i++){
        if (i%2==0) continue;

        for (int j=1; j<=n-i; j++){
            if (j%2==0) continue;
            printf(" ");
        }

        for (int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i=n; i>0; i--){
        if (i%2!=0) continue;

        for (int j=n-i+1; j>=1; j--){
            if (j%2==0) continue;
            printf(" ");
        }

        for (int j=1; j<i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*
for input 6:
   1
  123
 12345
  123
   1

   OR

   1
  123
 12345
 12345
  123
   1     ??????
*/