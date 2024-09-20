/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set2asg2.c
 * Desription: currency notes
************************************/

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the total amount: ");
	scanf("%d", &n);
	
	if (n%5==0)
	{
		int m = n;
		int n500, n100, n50, n20, n10, n5;
		
		n500 = m/500;
		m=m%500;
		
		n100 = m/100;
		m=m%100;
		
		n50 = m/50;
		m=m%50;
		
		n20 = m/20;
		m=m%20;
		
		n10 = m/10;
		m=m%10;
		
		n5 = m/5;
		
		printf("%d = (500 x %d) + (100 x %d) + (50 x %d) + (20 x %d) + (10 x %d) + (5 x %d)\n", n, n500, n100, n50, n20, n10, n5);
	}
	else	
		printf("No exchange is possible!!\n");
	
	return 0;
}
