#include<stdio.h>

int func(int n)
{
	if(n==1)
	{
	printf("%d ", n);
	return;
    }
	printf("%d ", n);
	func(n-1);
	printf("%d ", n);
}

void main()
{
	func(5);
}

Output: 5 4 3 2 1 2 3 4 5
