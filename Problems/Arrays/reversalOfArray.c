#include <stdio.h>

void main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, n, 0, 4);
    display(arr, n);
 
}

void reverse(int arr[], int n, int start, int end)
{
    for ( ; start < end; start++, end--)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

void display(int arr[], int n)
{
	int i;
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
