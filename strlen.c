#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int strlen(char *str) 
{
	int count = 0;
	while (*str != '\0') 
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int strlen(char * str);
	char a[] = { "abcdefg" };
	printf("%d\n", strlen(a));
	system("pause");
	return 0;
}
