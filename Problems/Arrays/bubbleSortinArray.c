#include<stdio.h>

void swap(int* a, int* b)
{
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}

void print(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)	
{
	for (j = 0; j < n-i-1; j++)
	{
		  if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
   }
}
}
 
void main()
{
	int n;
	printf("Enter the size of the array");
	scanf("%d", &n);
	int arr[n];
	int i;
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	print(arr, n);
    bubbleSort(arr, n);
	printf("The sorted array: \n");
	print(arr, n);
}
