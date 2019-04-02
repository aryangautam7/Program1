#include <stdio.h> 
void swap(int *x, int *y) 
{ 
	int t= *x; 
	*x = *y; 
	*y = t; 
} 
void selectionSort(int arr[], int n) 
{ 
int i, j, m; 
for (i = 0; i < n-1; i++) 
	{ 
	m= i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[m]) 
			m = j; 
	swap(&arr[m], &arr[i]); 
	} 
} 
void printArray(int arr[], int s) 
{ 
	int i; 
	for (i=0; i < s; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 
int main() 
{ 
	int arr[] = {64, 25, 12, 22, 11}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
