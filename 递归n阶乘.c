#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int fac(int n)
{
	int sum = 1;
	while (n != 1) 
	{
	    return n * fac(n-1);		 
	}
	return sum;
}
int main()
{
	int fac(int n);
	int n = 0;
	printf("Please Enter n:");
	scanf("%d", &n);
	printf("%d\n",fac(n));
	system("pause");
	return 0;
}
