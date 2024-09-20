/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: labt2prob3.c
 * Desription: Checking whether a non-negative integer is divisible by three, using it's binary representation
************************************/

#include <stdio.h>
#include <stdlib.h>

int* decToBin(int n, int bin[]){
	/* initialising the bin[] arr with all elements as 0 */
	for(int i=0; i<32; i++){
		bin[i]=0;
	}
	
	/* storing the binary representation of the given number */
	for(int i=31; i>=0; i--){
		bin[i]=n%2;
		n=n/2;
	}
	
	/*for(int i=0;i<32;i++)
		printf("%d",bin[i]);
	printf("\n");*/
	
	return bin;
}

int main(){
	/* declaration of variables */
	int num;
	scanf("%d", &num);

	/* the main working area */
	int state=0;
	
	int *bin=(int *)malloc(sizeof(int)*32);
	
	bin = decToBin(num, bin);
	
	int n=0;
	//printf("n=%d, state=%d\n",n,state);
	
	for(int i=1; i<32; i++){

		if (bin[i] == 0){
			 if(state==1){
				state=2;
			}
			else if(state==2){
				state=1;
			}
			else{
				state=0;
			}
		}
		if (bin[i] == 1){
			if(state==0){
				state=1;
			}
			else if(state==1){
				state=0;
			}
			else{
				state=2;
			} 
		}
		/*n = 2*n + bin[i];
		state = n%3;*/	/*switch(n%3){
							case 0: state = 0;
							case 1: state = 1;
							case 2: state = 2;
						}*/
		
		//printf("n=%d, bin[%d]=%d, state=%d\n",n,i,bin[i],state);
	}
	
	/* printing the outputs */
	if(state != 0){
		printf("%d is not divisible by three\n",num);
	}
	else{
		printf("%d is divisible by three\n",num);
	}
	
	
	return 0; 
}
