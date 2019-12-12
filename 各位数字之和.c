#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int DigitSum(int n)
{
	static int sum = 0;
	if (n < 10)
	{
		sum += n;
		return n;
	}
	else 
	{
		DigitSum(n / 10);
			sum += n % 10;
		return sum;
	}
}

int main()
{
	int DigitSum(n);
	int n = 0, result = 0;
	printf("Please Enter n:");
	scanf("%d", &n);
	result = DigitSum(n);
	printf("resurt:%d\n", result);
	system("pause");
	return 0;
}