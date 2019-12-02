#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,i;
	scanf_s("%d", &a);
	int f(int x);
	b = f(a);
	for (i = 0; i < 100; i++) 
	{
		if (b >= a)
		{
			b = f(a - 1);
		}
		else
		{
			break;
		}
	}
	printf("%d", b);
	system("pause");
	return 0;
}
int f(int x)
{
	if (x <= 1)
		return 1;
	else
		return f(x - 1) + f(x - 2);
}

