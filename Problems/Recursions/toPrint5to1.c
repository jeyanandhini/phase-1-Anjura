#include<stdio.h>

int func(int n)
{
	if(n==0)
	return;
	printf("%d ", n);
	func(n-1);
}

void main()
{
	func(5);
}

Output: 5 4 3 2 1
