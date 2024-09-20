/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set4asg1.c
 * Desription: Working with arrays
************************************/

#include <stdio.h>

#define MAX 50

int second_max(int arr[], int n){
	int max=0, max2=0;
	for(int i=0; i<n; i++){
		max = (arr[i] > max) ? arr[i] : max;
	}
	for(int i=0; i<n; i++){
		max2 = (max2 < arr[i] && max!=arr[i]) ? arr[i] : max2;
	}
	return max2;
}

int second_min(int arr[], int n){
int max;
	for(int i=0; i<n; i++){
		max = (arr[i] > max) ? arr[i] : max;
	}
	int min=max, min2=max;
	for(int i=0; i<n; i++){
		min = (arr[i] < min) ? arr[i] : min;
	}
	for(int i=0; i<n; i++){
		min2 = (min2 > arr[i] && min!=arr[i]) ? arr[i] : min2;
	}
	return min2;
}

float frac_above_average(int arr[], int n){
	int total = 0;
	for(int i=0; i<n; i++)
		total = total + arr[i];
	int avg = (total/(float) n);
	int count=0;
	for(int i=0; i<n; i++){
		if (arr[i]>avg)
			count++;		
	}
	return (count/(float) n)*100;
}

int len_long_seq(int arr[], int N){
	int count=1;
	int maxCount=0;
	for (int i=0; i<N; i++){
		while(arr[i]==arr[i+1] && i+1<N)
		{
			count++;
			i++;
		}
		maxCount = (count > maxCount) ? count : maxCount;
		count = 1;
	}
	return maxCount;
}

int len_wrapped_long_seq(int arr[], int N){
	int count=1, wrapCount=0;
	int maxCount=0;
	int flag=0;
	for (int i=0; i<N; i++){
		while(arr[i]==arr[i+1] && i+1<N)
		{
			count++;
			i++;			
		}
		if (i==N-1 && arr[i]==arr[0]){
			wrapCount = count+1;
		}		
		
		maxCount = (count > maxCount) ? count : maxCount;
		count = 1;
	}
	if(wrapCount!=0){
		int i=0;
		while(arr[i]==arr[i+1]){
			wrapCount++;
			i++;
		}
		maxCount = (wrapCount > maxCount) ? wrapCount : maxCount;
	}
	
	return maxCount;
}

void cumseq(int arr[], int N){
	for(int i=0; i<N; i++){
		int cSum=0;
		for(int j=i; j<N; j++){
			cSum = cSum + arr[j];
		}
		arr[i]=cSum;
	}
	for(int i=0; i<N; i++){
		printf("%d", arr[i]);
		if(i!=N-1)
			printf(", ");
	}
	printf("\n");
}

int main()
{	
	int N, arr[MAX];
	printf("Enter then value of N: ");
	scanf("%d", &N);
	
	printf("arr[%d] = ", N);
	for(int i=0; i<N; i++)
		scanf("%d", &arr[i]);
	
	printf("The second maximum integer is %d\n", second_max(arr, N));  //1a
	printf("The second minimum integer is %d\n", second_min(arr, N));  //1b
	
	printf("The fraction of numbers that are above average is %f %%\n", frac_above_average(arr, N));  //2
	
	printf("The length of the longest sequence of consecutive identical numbers %d\n", len_long_seq(arr, N));  //3
	
	printf("The length of the longest sequence of consecutive identical numbers with wrapping around is %d\n", len_wrapped_long_seq(arr, N));  //4
	
	cumseq(arr,N);  //5
	
	return 0;
}
