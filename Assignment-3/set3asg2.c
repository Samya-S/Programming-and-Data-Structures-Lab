/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set3asg2.c
 * Desription: Krishnamurthy Number
************************************/

#include <stdio.h>

int main()
{	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	int num = n;	
	int digit, fact_digit, fact_sum = 0;
	
	while (n!=0)
	{
		digit = n % 10;
		
		fact_digit = 1;
		
		if (digit!=0)
		{
			for (int i=1; i<=digit; i++)
				fact_digit = fact_digit * i;
		}
		else
			fact_digit = 1;
		
		fact_sum = fact_sum + fact_digit;
		n = n/10;
	}
	
	if(num==fact_sum)
		printf("%d is a Krishnamurthy Number\n", num);
	else
		printf("%d is not a Krishnamurthy Number\n", num);	
	
	return 0;
}
