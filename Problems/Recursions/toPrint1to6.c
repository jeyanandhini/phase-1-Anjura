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
	func(6);
}

Output: 1 2 3 4 5 6
