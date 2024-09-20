/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set6asg1.c
 * Desription: Array of Strings
************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 20

char A[400][40];
int n_w=200;

/*int strcmpS(char *str1, char *str2){
	int i;
	for(i=0; str1[i]!='\0'; i++){
		if (str1[i]!=str2[i]){
			return 1;
		}
	}
	if(str2[i]!='\0') 
		return 1;
	
	return 0;
}*/

void readinp(){
	//printf("Enter the total no. of words to input: ");
	//scanf("%d", &n_w);
	
	/*for(int i=0; i<n_w;i++){
		//scanf("%[^\n]s", A[i]);
		scanf("%s", A[i]);
	}*/
	//fgets(*A[0], SIZE, stdin);
	int i=0;
	FILE* fp;
	fp = fopen("input.dat", "r");
	while(EOF!=fscanf(fp, "%[^\n]\n", A[i])){
		char *word = strtok(A[i], " ");
		
		while(word!=NULL){
		
			strcpy(A[i], word);
			word = strtok(NULL, " ");
			i++;
		}
	}
	//printf("\nEntered");
	return;
}

/*void print(){
	for(int i=0; i<100;i++)
		printf("%s ", A[i]);
}*/

int findinA(char *key){
	int count=0;
	for(int i=0; i<n_w; i++){
		int sameStr = strcmp(A[i],key);
		if (sameStr==0){
			count++;
		}
	}
	return count;
}

int modeofA(char *key){
	int count, maxCount=0;
	for (int i=0; i<n_w; i++){
		count = findinA(A[i]);
		if (count > maxCount){
			maxCount = count;
			strcpy(key,A[i]);
		}
	}
	return maxCount;
}

int main(){
	//fgets(str, SIZE, stdin);	 
	char key[SIZE], str[SIZE];
	
	readinp();
	
	//print();
	
	printf("\nEnter the word to search: ");
	scanf("%s", key);
	printf("\nOccurrences of \'%s\' in input.dat: %d", key, findinA(key));
	
	int x=modeofA(str);
	printf("\nMode of \'%s\' in input.dat: %d", str, x);
	
	printf("\n");
	return 0;
}
