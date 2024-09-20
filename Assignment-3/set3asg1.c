/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set3asg1.c
 * Desription: Drawing patterns
************************************/

#include <stdio.h>

int main()
{	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("\n");
	
	for(int i=1; i<=n; i++)
	{
		printf("====");		
	}
	printf("\n");
	
	for (int i=1; i<=n; i++)
	{
		printf("|");
		
		for (int j=n-i; j>0; j--)
		{
			printf("  ");
		}
		printf("<");
		
		for (int j=2; j<=i; j++)
		{
			printf("----");
		}
		
		printf(">");
		
		for (int j=n-i; j>0; j--)
		{
			printf("  ");
		}
		
		printf("|\n");
	}
	
	for (int i=n-1; i>0; i--)
	{
		printf("|");
		
		for (int j=n-i; j>0; j--)
		{
			printf("  ");
		}
		printf("<");
		
		for (int j=2; j<=i; j++)
		{
			printf("----");
		}
		
		printf(">");
		
		for (int j=n-i; j>0; j--)
		{
			printf("  ");
		}
		
		printf("|\n");
	}
	
	for(int i=1; i<=n; i++)
	{
		printf("====");		
	}
	printf("\n");
	
	return 0;
}
