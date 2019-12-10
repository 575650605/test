#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int pow(int n,int k)
{
	if (k == 1) 
	{
		return n;
	}
	else 
	{
		return n * pow(n, k - 1);
	}
}

int main()
{
	int pow(n,k);
	int n = 0, y = 0;
	int k = 0;
	printf("Please Enter n&k:");
	scanf("%d %d", &n, &k);
	y = pow(n,k);
	printf("%d\n", y);
	system("pause");
	return 0;
}
