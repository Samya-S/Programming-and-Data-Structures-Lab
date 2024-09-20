/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set2asg3.c
 * Desription: Numerical Door Lock
************************************/

#include <stdio.h>

int main()
{	
	char c;
	
	int state = 1; /* Initial state is S1 */
				   // state 2 implies 1st input is correct
				   // state 3 implies 1st two inputs are correct
				   
	int open = 0; /* This is the status of the lock. open==0 means lock is closed */
	
	while (open == 0) 
	{
		c = getchar(); /* Read a digit from the keypad */
		if (c == EOF)
		{
			break;
		}
		
		switch (state) {
			case 1: if (c == '2') state = 2;
					else state = 1;
					break;
					
			case 2: if (c == '0') state = 3; 
					else if (c == '2') state = 2;
					else state = 1;
					break;
					
			case 3: if (c == '7')					
					{
						open = 1;
						printf("Lock is open \n"); // lock opended
					}
					else if (c == '2') state = 2;
					else state = 1;
					break;
		}
	}
	
	if (open == 0) printf("Lock is not open \n"); 
	
	return 0;
}
