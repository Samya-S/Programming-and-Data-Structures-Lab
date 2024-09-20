/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set5asg2.c
 * Desription: Mirroring 2D array
************************************/

#include <stdio.h>

void mirror(char grid[5][5]){
	printf("The original 2D array is: \n");
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%c ", grid[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			char c=grid[i][j];
			grid[i][j]=grid[i][4-j];
			grid[i][4-j]=c;
		}
	}
	
	printf("The mirror of 2D array is: \n");
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%c ", grid[i][j]);
		}
		printf("\n");
	}
}

int main()
{	
	char s[5][5], c;
	
	for(int i=0; i<5; i++){
		//printf("Enter the row %d (enter 5 characters): ", i+1);
		int j=0;
		while(j<5){
			scanf("%c", &c);
			if (c=='*' || c=='_'){
				s[i][j]=c;
				j++;
			}
		}
	}
	
	
	
	mirror(s);
	
	printf("\n");	
	
	return 0;
}
