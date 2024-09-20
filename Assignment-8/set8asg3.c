/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set8asg3.c
 * Desription: showfields
************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char ** argv){
	if (argc < 2){
		printf("No value entered!");
		return 1;
	}
	
	double n = atof(argv[1]);
	
	unsigned long long *bits = (unsigned long long *) &n;
		
	unsigned long long sign = (*bits>>63) & 1;
	
	unsigned long long expn = (*bits>>52) & 2047; //7FF = 2047
	
	printf("Sign: %llu\n",sign);
	//putchar((sign) ? '1':'0');
	//printf("\n");
	
	printf("Exponent: ");
	for(int i = 10; i>=0;i--){
		unsigned long long mask = 1 << i;
		putchar((expn & mask) ? '1':'0');
	}
	printf("\n");
	
	return 0;
}
