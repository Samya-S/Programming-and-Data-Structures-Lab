/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set1asg3.c
 * Desription: circles
************************************/

#include <stdio.h>
#include <math.h>

void main()
{
	int r1, r2, x1, y1, x2, y2;
	
	printf("Enter the 1st radius: ");
	scanf("%d", &r1);
	printf("Enter the coordinates of the center for the 1st circle (x1,y1): ");
	scanf("%d %d", &x1, &y1);
	
	printf("Enter the 2nd radius: ");
	scanf("%d", &r2);
	printf("Enter the coordinates of the center for the 2nd circle (x2,y2): ");
	scanf("%d %d", &x2, &y2);
		
	float c1c2 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	
	int dr, bigCir;
	if (r1 > r2)
	{
		dr = r1 - r2;
		bigCir = 1;
	}
	else
	{
		dr = r2 - r1;
		bigCir = 2;
	}

	if (c1c2 <= dr)
		printf("The circle %d itself is the smallest circle that encloses both of the two circles\n", bigCir);
		
	else    // (c1c2 > r1+r2) and (c1c2 > dr && c1c2 < r1+r2) both covered
	{
		int newR = (r1 + r2 + c1c2)/2;
		float newX, newY;
		
		float theta = atan((y2-y1)/(x2-x1));
		if(x1<x2)
		{
			r1=-r1;
		}
		else // if(x1>x2)
		{
			r2=-r2;
		}
		newX = (x1+r1*cos(theta) + x2+r2*cos(theta))/2;
		newY = (y1+r1*sin(theta) + y2+r2*sin(theta))/2;
		
		
		printf("The circle enclosing those two given circles has radius = %d and center (%f,%f)\n", newR, newX, newY);
	}
		
	printf("\n");
	
}
