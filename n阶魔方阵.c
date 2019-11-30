#include "stdio.h"
#include "stdlib.h"
int main() 
{
	int **a;
	int  n, i,j=0, k ,p ,q ;
	scanf_s("%d", &n);
	a = (int**)malloc(n * sizeof(int*)); 
	for (i = 0; i < n; i++)
		a[i] = (int*)malloc(n * sizeof(int));
	k = (n -1) / 2;
	for (i = 0; i <= n-1; i++)
	{
		for (j = 0; j <= n-1; j++)
		{
			a[i][j] = 0;
		}
	}
	j = 0;
	for (i = 1; i <= n*n; i++)
	{
		a[j][k] = i;
		p = j;
		q = k;
		j = j - 1;
		k = k + 1;
		if (j < 0)
		{
			j = n - 1;
		}
		if (k > n - 1)
		{
			k = 0;
		}
		if ( a[j][k] != 0) 
		{
			k = q;
			j = p + 1;
		}
	}
	for (i = 0; i <= n-1; i++) 
	{
		for (j = 0; j <= n-1; j++) 
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}