/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set1asg1.c
 * Desription: d-m-y
************************************/

#include <stdio.h> 

void main()
{
	int d, m, y, x;
	
	printf("Enter the day: ");
	scanf("%d", &d);
	printf("Enter the month: ");
	scanf("%d", &m);
	printf("Enter the year: ");
	scanf("%d", &y);
	
	y = y - (14 - m) / 12;
	x = y + y/4 - y/100 + y/400;
	m = m + 12 * ((14-m)/12) - 2;
	d = (d + x + (31 * m) / 12) % 7;
	
	if (d==0) 
		printf("Sunday");
	else if (d==1) 
		printf("Monday");
	else if (d==2) 
		printf("Tuesday");
	else if (d==3) 
		printf("Wednesday");
	else if (d==4) 
		printf("Thursday");
	else if (d==5) 
		printf("Friday");
	else
		printf("Saturday");
	
	printf("\n");
	
}
