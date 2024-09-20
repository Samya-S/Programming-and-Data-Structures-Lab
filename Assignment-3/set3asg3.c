/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set3asg3.c
 * Desription: Series Summation
************************************/

#include <stdio.h>
#include <math.h>

int main()
{	
	int k;
	double x;
	printf("Enter the value of x (in radian): ");
	scanf("%lf", &x);
	printf("Enter the no. of terms to calculate: ");
	scanf("%d", &k);
	
	printf("\n");
	
	double sin_x=0.0, cos_x=0.0;
	double sin_x_term=x, cos_x_term=1; // initialised with the 1st terms
	
	sin_x = sin_x + sin_x_term;
	cos_x = cos_x + cos_x_term;
	
	for (int i=2; i<=k+1; i++)
	{
		sin_x_term = sin_x_term * (x*x * (1/(2*(double) i-1))*(1/(2*(double) i-2)) * (-1));
		sin_x = sin_x + sin_x_term;
		
		cos_x_term = cos_x_term * (x*x * (1/(2*(double) i-3))*(1/(2*(double) i-2)) * (-1));
		cos_x = cos_x + cos_x_term;
	}
	
	
	printf("Sin(%lf) := [via series expansion] %lf, [via library func.] %lf\n", x, sin_x, sin(x));
	
	printf("Cos(%lf) := [via series expansion] %lf, [via library func.] %lf\n", x, cos_x, cos(x));
	
	
	return 0;
}
