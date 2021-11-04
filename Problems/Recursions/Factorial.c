#include<stdio.h>

int factorial(int n)
{
	if(n==1)
	return 1;
	
	int k;
	int c;
	k = factorial(n-1);
	c = n*k;
	return c;
}

void main()
{
	int fact;
	int n;
	printf("Enter n");
	scanf("%d", &n);
	fact = factorial(5);
	printf("%d", fact);
}

Output: 120
