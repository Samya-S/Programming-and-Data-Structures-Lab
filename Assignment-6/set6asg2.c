/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set6asg2.c
 * Desription: Two-Dimensional Array of Strings
************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 20

//char A[20][40][40], c[20];
char *c[200];
int A[400][400];

void inpt(){	
	/*for(int i=0; i<n_w;i++){
		//scanf("%[^\n]s", A[i]);
		scanf("%s", A[i]);		
	}*/
	
	/*for(int i=0; A[20][i][40]!='\n' ;i++){
		for(int j=0; i<n_w;i++){
			scanf("%s", A[i]);
		}		
	}*/
	
	/*int i=0, k=0;
	char x;
	printf("\nEntered");
	while(x!=EOF){
		for(int j=0; x!='\n'; j++){
			scanf("%s", c[k]);
			A[i][j] = k;
			k++;
			x=getchar();
		}
		i++;
		x=getchar();
	}*/
	
	//fgets(*A[0], SIZE, stdin);
	int i=0;
	FILE* fp;
	fp = fopen("input1.dat", "r");
	while(EOF!=fscanf(fp, "%[^\n]\n", c[i])){
		char *word = strtok(c[i], " ");
		
		while(word!=NULL){
		
			strcpy(c[i], word);
			word = strtok(NULL, " ");
			i++;
		}
	}
	//printf("\nEntered");
	return;
}

void printN(){
	int i=0, k=0;
	char x;
	for(int i=0; i<40; i++){
		for(int j=0; j<40; j++){
			printf("%s", c[k]);
			k++;
		}
		i++;
	}
}

int main(){
	//fgets(str, SIZE, stdin);	 

	inpt();

	printN();
	
	printf("\n");
	return 0;
}
