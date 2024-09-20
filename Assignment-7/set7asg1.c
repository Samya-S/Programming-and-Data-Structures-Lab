/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set7asg1.c
 * Desription: Identity
************************************/

#include <stdio.h>
#include <stdlib.h>

int identity(int a[], int size){
	int i,l=0,r=size-1,mid;
	//printf("l=%d,r=%d\n",l,r);
	while(l<=r){
		mid = (l+r)/2;
		//printf("l=%d,r=%d\n",l,r);
		if(a[mid]<mid){
			l = mid + 1;
		}
		else if(a[mid]>mid){
			r = mid - 1;
		}		
		else{			
			//if(a[mid]==mid)
			return mid;
		}
	}
	
	return -1;
}

void sort (int a[], int size){
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}  
	}
	return;
}

int main(){
	int *a, n;
	
	scanf("%d", &n);
	
	a = (int *)malloc(sizeof(int)*n);
	
	if(a==NULL){
		printf("Unable to allocate memory using malloc!");
		return 1;
	}
	
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	sort(a, n);
	
	printf("a[%d] = ",n);
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	printf("i = %d\n",identity(a,n));
	
	printf("\n");
	return 0;
}
