#include<stdio.h>

void main()
{
	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	int minr;
	int minc;
	int maxr;
	int maxc;
	minr = 0;
	minc = 0;
	maxr = 2;
	maxc = 2;
	int i;
	for(i=minr; i<=maxr; i++)
	{
		printf("%d ", a[i][minc]);
	}
	minc++;
	printf("\n");
	
	for(i=minc; i<=maxc; i++)
	{
		printf("%d ", a[maxr][i]);
	}
	maxr--;
	printf("\n");
	
	for(i=maxr; i>=minr; i--)
	{
		printf("%d ", a[i][maxc]);
	}
	maxc--;
	printf("\n");
	  
	for(i=maxc; i>=minc; i--)
	{
		printf("%d ", a[minr][i]);
	}
	minr++;
	printf("\n");
	
		for(i=minr; i<=maxr; i++)
	{
		printf("%d ", a[i][minc]);
	}
	minc++;
	printf("\n");
	
	for(i=minc; i<=maxc; i++)
	{
		printf("%d ", a[maxr][i]);
	}
	maxr--;
	printf("\n");
	
	for(i=maxr; i>=minr; i--)
	{
		printf("%d ", a[i][maxc]);
	}
	maxc--;
	printf("\n");
	  
	for(i=maxc; i>=minc; i--)
	{
		printf("%d ", a[minr][i]);
	}
	minr++;
	printf("\n");
}
