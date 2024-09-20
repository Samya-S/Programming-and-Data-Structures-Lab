/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: labt1odd.c
 * Desription: Flying Saucers
************************************/

#include <stdio.h>

int main(){
	// declaration and initialisation of variables
	char c;
	int count=0, flagFirst=0, firstLength, length=0, maxLength=0;
	
	// the main working area
	do{
		scanf("%c", &c);
			
		while (c=='('){
			length++;
			
			do{
				scanf("%c", &c);
				length++;
			} while(c=='=');
			
			
			if(c=='(') {
				length = 0;
				continue;
			}			
			else if(c==')') {											// confirms the ending of a flying saucer
				count++;
			}
			else {
				length = 0;
				break;
			}
			
			
			if (flagFirst==0) {											// checks for the first flying saucer
				firstLength = length;
				flagFirst = 1;
			}
						
			maxLength = (maxLength >= length) ?  maxLength : length;   	// stores the max possible length
			length = 0;
		}
		
	} while (c!='\n');     												// exits loop at line termination
	
	
	
	// printing the outputs
	
	printf("The number of flying saucers: %d\n", count);
	
	if (count!=0) {
		printf("The first flying saucer is: (");
		for(int i=1; i<=(firstLength-2); i++) 
			printf("=");
		printf(")\n");
	}
	else
		printf("There are no flying saucers!\n");
	
	printf("The length of the largest flying saucer is: %d\n", maxLength);
	
	
	return 0; 
}
