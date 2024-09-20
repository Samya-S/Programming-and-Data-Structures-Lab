/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set5asg1.c
 * Desription: Recursion
************************************/

#include <stdio.h>

#define SIZE 50

void reverse(char s[]){
	int i=0;
	char a[SIZE];
	
	while(1){
		if(s[i]==' '){
			a[i] = '\0';
			reverse(s+i+1);
			printf("%s ", a);
			break;
		}
		if(s[i]=='\n'){
			a[i] = '\0';
			printf("%s ", a);
			break;
		}
		a[i]=s[i];
		i++;
	}
	return;
}

int main(){
	char str[SIZE];
	fgets(str, SIZE, stdin);
	 
	//printf("%s", str);
	reverse(str);
	printf("\n");
	return 0;
}
