#include<stdio.h>

void main()
{
	int a[4][4] = {1, 1, 2, 2, 8, 3, 0, 2, 6, 4, 2, 0, 7, 2, 1, 2};
	int minr, minc, maxr, maxc;
	minr = 0;
	minc = 0;
	maxr = 3;
	int i;
	
	for(i=minr; i<=maxr; i++)
	{
		printf("%d ", a[i][minc]);
	}
	minc++;
	printf("\n");
	
	for(i=maxr; i>=minr; i--)
	{
		printf("%d ", a[i][minc]);
	}
	minc++;
	printf("\n");
	
	for(i=minr; i<=maxr; i++)
	{
		printf("%d ", a[i][minc]);
	}
	minc++;
	printf("\n");
	
	for(i=maxr; i>=minr; i--)
	{
		printf("%d ", a[i][minc]);
	}
	printf("\n");
}
