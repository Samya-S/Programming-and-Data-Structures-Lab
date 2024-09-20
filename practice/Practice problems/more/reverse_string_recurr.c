#include <stdio.h>

int a=0;

void printReversed(){
    char c;

    scanf("%c", &c);

    if (a==0){
        printf("The reverse string is: ");
        a=1;
    }

    if (c=='\n') return;
    else {
        printReversed();
        printf("%c",c);

        // for normal order (echo)

        // printf("%c",c);
        // printReversed();
    }
}

int main(){
    printf("Enter the string: ");

    printReversed();

    printf("\n");

    return 0;
}