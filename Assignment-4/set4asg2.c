/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set4asg2.c
 * Desription: Inverse permutation
************************************/

#include <stdio.h>

#define MAX 50

int main()
{	
	int N, a[MAX],b[MAX];
	printf("Enter the value of N: ");
	scanf("%d", &N);
	
	printf("a[%d] = ", N);
	for(int i=0; i<N; i++)
		scanf("%d", &a[i]);
	
	int flag;
	for(int j=0; j<N; j++){
		flag=1;
		
		for(int i=0; i<N; i++){
			if(a[i]==j)
				flag=0;
		}
		
		if(flag==1){
			printf("Input is invalid\n");
			return 0;
		}
	}
	
	for(int i=0; i<N; i++){
		int j;
		for(j=0; j<N; j++){
			if(a[j]==i)
				break;
		}
		b[i]=j;
	}
	
	printf("a[%d] = ", N);
	for(int i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	printf("b[%d] = ", N);
	for(int i=0; i<N; i++)
		printf("%d ", b[i]);
	printf("\n");
	
	return 0;
}
