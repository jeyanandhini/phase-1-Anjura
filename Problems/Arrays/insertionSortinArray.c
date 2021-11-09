#include<stdio.h>

display(int arr[], int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int* a, int* b)
{
	int* temp;
	temp = *b;
	*b = *a;
	*a = temp; 
}
putAtRightPlace(int arr[], int index)
{
	int i;
	int end;
	end = index - 1;
	for(i=end; i>=0; i--)
	{
		if(arr[index] < arr[i])
		{
			swap(&arr[index], &arr[i]); 
			index = i;
		}
	}
}

insertionSort(int arr[], int n)
{
	int i;
	for(i=1 ; i<n; i++)
	{
		putAtRightPlace(arr, i);
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
	
	display(arr, n);
	insertionSort(arr, n);
	printf("The sorted array: \n");
	display(arr, n);
}
