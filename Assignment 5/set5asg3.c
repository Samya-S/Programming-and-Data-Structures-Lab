/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set5asg3.c
 * Desription: Dropping Tiles
************************************/

#include <stdio.h>

#define SIZE 50

int main()
{	
	int tiles[SIZE][SIZE], n;
	
	scanf("%d", &n);
	//printf("n=%d\n", n);
	
	int k;
	scanf("%d", &k);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			scanf("%d", &tiles[i][j]);
	}
	printf("\n");
	printf("The original 2D array is: \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", tiles[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nKey = %d\n", k);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(tiles[i][j]==k)
				tiles[i][j]=0;
		}
	}
	
	/*printf("\n");
	printf("The semi-final 2D array is: \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", tiles[i][j]);
		}
		printf("\n");
	}*/
	
	for(int v=1; v<=n; v++){
		for(int j=0; j<n; j++){
			for(int i=n-1; i>=0; i--){
				if (tiles[i][j]==0){				
					//printf("done tiles[%d][%d]\n", i,j);
					for(int x=i; x-1>=0; x--){
						tiles[x][j] = tiles[x-1][j];
					}
					//while(tiles[x+1][j]==0){
						
					//}
					tiles[0][j] = 0;
				}
			}
		}
	}
		
	printf("\n");
	printf("The final 2D array is: \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if (tiles[i][j]!=0)
				printf("%d ", tiles[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	
	printf("\n");	
	
	return 0;
}
