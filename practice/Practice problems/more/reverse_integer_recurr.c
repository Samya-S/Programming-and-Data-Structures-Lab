#include <stdio.h>

void printReverse(int x){
    if (x<10) {               // base condition
        printf("%d", x);
        return;
    }
    else {
        printf("%d", x%10);
        printReverse(x/10);
        return;
    }
}

int main(){
    int n=789;

    printReverse(n);

    return 0;    
}