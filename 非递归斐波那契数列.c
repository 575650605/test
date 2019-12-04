#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int facii(int n)
{
	int i = 0, x1 = 0, x2 = 1, x3 = 0;
	if (n < 2)
		return 1;
	for (i = 2; i <= n; i++)
	{
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
	}
	return x3;
}

int main()
{
	int n, y;
	printf("Please Enter n:");
	scanf("%d", &n);
	y = facii(n);
	printf("%d\n", y);
	system("pause");
	return 0;
}