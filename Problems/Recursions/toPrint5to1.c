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
	int n;
	printf("Enter n");
	scanf("%d", &n);
	func(n);
}

Output:Enter n
       5
       5 4 3 2 1
