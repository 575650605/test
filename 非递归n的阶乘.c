#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int fac(int n)
{
	int sum = 1;
	int i = n;
	for (; i > 0; i--) 
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	int fac(int n);
	int n = 0;
	printf("Please Enter n:");
	scanf("%d", &n);
	printf("%d\n", fac(n));
	system("pause");
	return 0;
}