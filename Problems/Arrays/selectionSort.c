#include<stdio.h>

int find_minIdx(int arr[], int start, int end)
{
	int min_idx;
	min_idx = start;
	int i;
	for(i = start+1; i<end ; i++)
	{
	   if(arr[min_idx] > arr[i])
	    min_idx = i;
	}
	return min_idx;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void display(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
	   printf(" %d ", arr[i]);
	}
	printf("\n\n");
}

void selectionsort(int arr[], int start, int end)
{
	int i; 
	int min_index;
	int x;
	for(i=start; i<end; i++)
	{
	    min_index = i;
	    x = find_minIdx(arr, i, end);
	    swap(&arr[min_index], &arr[x]);
	}
}

void main()
{
	int n;
	int i;
	
	printf("enter the number of elements in the array \n");
	scanf("%d", &n);
	int arr[n];

	printf("enter the elements \n");
	for(i=0; i<n; i++)
	{
	   scanf("%d", &arr[i]);
	}

	printf("unsorted array : \n");
	display(arr, n);

    selectionsort(arr, 0, n);
    
	printf("sorted array : \n");
	display(arr, n);
}

