/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set7asg2.c
 * Desription: Root of a polynomial
************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float evalpoly(int poly[], int k, float x){
	float val=0;
	
	for(int i=0; i<=k; i++){
		val = val + poly[i]*pow(x,i);
	}
	
	return val;
}

float mod(float n){
	if (n>0)
		return n;
	else
		return -n;
}

float myroot(int poly[], int k, float a, float b){

	if(!(evalpoly(poly, k, a)*evalpoly(poly, k, b)<0)){		
		printf("f(a) and f(b) have same sign!!!\nWe cannot confirm a root between a and b");
		return b+1;
	}
	
	float val = evalpoly(poly, k, (a+b)/2), p=(a+b)/2;
	while(1){
		p=(a+b)/2;
		
		float fa = evalpoly(poly, k, a);
		float fb = evalpoly(poly, k, b);
		float fp = evalpoly(poly, k, p);
		
		if(fp*fa<0)
			b=p;
		else if(fp*fb<0)
			a=p;
		
		val = evalpoly(poly, k, (a+b)/2);
		if(mod(val)<0.0001){
			return (a+b)/2;
		}
	}
}

int main(){
	int k, *poly;
	float a,b;
	
	printf("Enter the values of k, a, b respectively: ");
	scanf("%d %f %f", &k, &a, &b);
	
	poly = (int *)malloc(sizeof(int)*k+1);
	
	if(poly==NULL){
		printf("Unable to allocate memory using malloc!");
		return 1;
	}
	
	printf("Enter the coefficients of the polynomial (start from least power): ");
	for(int i=0; i<k+1; i++){
		scanf("%d", &poly[i]);
	}
	
	float root = myroot(poly, k, a, b);
	
	if(root==b+1){
		printf("\nFunction returns falure!!!\n");
		return 2;
	}
	
	printf("The root of the polynomial between %f and %f is %f\n", a, b, root);
		
	printf("\n");
	return 0;
}
