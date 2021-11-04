#include<stdio.h>

int func(int n)
{
	if(n==0)
	return;
	func(n-1);
	printf("%d ", n);
}


void main()
{
	int n;
	printf("Enter n");
	scanf("%d", &n);
	func(n);
}

Output: Enter n
        5
	1 2 3 4 5 
