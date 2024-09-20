/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set8asg2.c
 * Desription: cxadd
************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char ** argv){
	int n, n_i, sum_r = atoi(argv[1]), sum_i=0;
	//////// = atoi(argv[1]);
	//if(
	
	/*for(int i=1; i<argc; i++){		
		printf("%s ", argv[i]);
	}*/
	//printf("\nargc = %d\n", argc);
	
	char **s=(char **)malloc(sizeof(char *)*argc);
	for(int i=1; i<argc; i++){
		if (strcmp(argv[i],"+")==0){
			if (argv[i+1][0]=='i'){			
				s[i] = &argv[i+1][1];
				//printf("s[i] = %s\n", s[i]);
				n = atoi(s[i]);
				//printf("n = %d\n", n);
				sum_i = sum_i + n;
			}
			else{
				n = atoi(argv[i+1]);
				//printf("n = %d\n", n);
				sum_r = sum_r + n;
			}		
		}
		else if (strcmp(argv[i],"-")==0){
			if (argv[i+1][0]=='i'){			
				s[i] = &argv[i+1][1];
				//printf("s[i] = %s\n", s[i]);
				n = atoi(s[i]);
				//printf("n = %d\n", n);
				sum_i = sum_i - n;
			}
			else{
				n = atoi(argv[i+1]);
				//printf("n = %d\n", n);
				sum_r = sum_r - n;
			}
		}
	}
	
	if(sum_i<0)
		printf("Sum = %d - i%d", sum_r , -sum_i);
	else
		printf("Sum = %d + i%d", sum_r , sum_i);
	
	printf("\n");
	return 0;
}
