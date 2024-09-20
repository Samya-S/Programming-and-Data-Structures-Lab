/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set1asg2.c
 * Desription: knight or knave
************************************/

#include <stdio.h> 

void main()
{
	char q1, q2;
	
	printf("Are both of you knights? (y/n) : ");
	scanf("%c", &q1);
	printf("Is Person A a knave? (y/n) : ");
	getchar(); // to take dummy input for pressing enter
	scanf("%c", &q2);
	
	
	if (q1=='y'){             
		if (q2=='y')                //q1=y,q2=y
			printf("A is knave and B is knight.");
		else                        //q1=y,q2=n
			printf("Both will be knights or both will be knaves.");
	}
	else{
		if (q2=='y')                //q1=n,q2=y
			printf("A is knight and B is knave.");
		else                        //q1=n,q2=n
			printf("Cannot be determined!");
	}
			
	printf("\n");
	
}
