/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: labt2prob1.c
 * Desription: Printing a string in reverse
************************************/

#include <stdio.h>

void printfstrrev(char *s){
	if (s[0]=='\0'){
		return;
	}
	else{
		printfstrrev(s+1);
		printf("%c", s[0]);		
	}
	return;
}

int main(){
	// declaration of variables
	char s[100];
	
	//printf("Enter the string to reverse: ");
	scanf("%[^\n]",s);
	
	// the main working area
	printfstrrev(s);
	
	printf("\n");	
	return 0; 
}
