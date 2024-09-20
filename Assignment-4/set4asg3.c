/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set4asg3.c
 * Desription: Recursion
************************************/

#include <stdio.h>

#define MAX 50

int canchange(int k)
{
	int a=0 ;
	if (k==0) return 0;
	if (k==3 || k==5 || k==10) return 1;
	if (k < 3) return -1;
	
	a = canchange(k - 10);
	if (a > 0) return a+1;
	
	a = canchange(k - 5);
	if (a > 0) return a+1;
	
	a = canchange(k - 3);
	if (a > 0) return a+1;
	
	return 0;
}

/*int change(int k, int n){
	int a=0;
	if (k==0) return 0;
	if (k==n) return 1;
	if (k < n) return 0;
	
	a = change(k - n, n);
	if (a > 0) return a+1;
}*/

int printchange(int k){
	int a = canchange(k), a3=0, a5=0, a10=0;
	
	/*flag=1, 
	if (k==0) a = 0;
	else if (k==3) a3=1;
	else if (k==5) a5=1;
	else if (k==10) a10=1;
	else if (k < 3) a = 0;
	else flag=0;*/
	
	/*a10 = printchange(k - 10);
	if (a10 > 0) return a10+1;
	
	a5 = printchange(k - 5);
	if (a5 > 0) return a5+1;
	
	a3 = printchange(k - 3);
	if (a3 > 0) return a3+1;*/
	
	/*a10 = change(k, 10);
	
	a5 = change(k, 5);
	
	a3 = change(k, 3);*/
	
	for(int i3=0; i3<=a; i3++){
		for(int i5=0; i5<=a-i3; i5++){
			for(int i10=0; i10<=a-i3-i5; i10++){
				if (i3*3 + i5*5 + i10*10 == k){
					a3=i3;
					a5=i5;
					a10=i10;
					goto a;
				}
			}
		}
	}
	
	a:
	//printf("a10 = %d, a5 = %d, a3 = %d",a3,a5,a10);
	
	//if(flag==1){
	printf("\n");
	for(int i=1; i<=a3; i++){
		printf("3");
		if((a5!=0 || a10!=0) || (i!=a3))
				printf("+");
	}
	for(int i=1; i<=a5; i++){
		printf("5");
		if(a10!=0 || i!=a5)
			printf("+");
	}
	for(int i=1; i<=a10; i++){
		printf("10");
		if(i!=a10)
			printf("+");
	}
	printf("\n");
	//}
}



int main()
{	
	int n;
	printf("Enter the amount: ");
	scanf("%d", &n);
	
	printf("The minimum number of coins needed to make the payment is %d\n",canchange(n));
	
	printchange(n);
			
	return 0;
}
