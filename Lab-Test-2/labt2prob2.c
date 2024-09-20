/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: labt2prob2.c
 * Desription: Checking whether a string is a palindrome
************************************/

#include <stdio.h>
#include <string.h>

int main(){
	/* declaration of variables */
	char s[100],s_[100];
	
	//printf("Enter the string: ");
	scanf("%[^\n]",s);
	
	
	/* the main working area */
	//printf("%s\n",s);
	
	for(int i=0,j=0; /*s[i]!='\0'*/ i<strlen(s); i++,j++){
		while (s[i]==' '){  /* ignoring spaces */
			i++;
		}
		//printf("i==%d, s[i]=%c\n",i,s[i]);
		s_[j]=s[i];
	}
	
	int len=strlen(s_);
	//printf("%s\n",s_);
	
	int flag=0;
	for(int i=0; i<len; i++){
		if(s_[i]!=s_[len-i-1]){
			flag = 1;
			break;
		}
	}
	
	
	/* printing the outputs */
	if(flag == 1){
		printf("%s is not a palindrome\n",s);
	}
	else{
		printf("%s is a palindrome\n",s);
	}
		
	
	return 0; 
}
