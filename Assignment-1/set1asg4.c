/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set1asg4.c
 * Desription: isbn no.
************************************/

#include <stdio.h> 

void main()
{
	int arr[9], i, check = 0, finalCheck = 0;
	
	for(i=0; i<=8; i++)
	{
		printf("Enter the digit of position %d (from left) : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int j=2;
	for(i=8; i>=0; i--)
	{
		check = check + (j * arr[i]);
		j++;
	}
	
	for(i=0; i<=10; i++)
	{
		finalCheck = i + check;
		if (finalCheck % 11 == 0)
			break; 	
	}
	int lastDigit = i;
	
	printf("The required fully formatted 10-digit ISBN number is: ");
	
	for(i=0; i<=8; i++)
	{
		printf("%d", arr[i]);
		if (i==0 || i==3)
			printf("-");
	}
	
	if (lastDigit==10)
		printf("-X");
	else
		printf("-%d", lastDigit);
		
	printf("\n");
	
}
