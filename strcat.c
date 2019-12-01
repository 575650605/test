#include <stdio.h>
#include <windows.h>
#pragma warning(disable: 4996)
void strcat1(char arr1[], char arr2[])
{
	int i = 0;
	while (arr1[i] != '\0') {
		i++;
	}
	int j = 0;
	while (arr2[j] != '\0') {
		arr1[i] = arr2[j];
		i++;
		j++;
	}
}
int main()
{
	char arr1[10] = "abcd";
	char arr2[10] = "1234";
	strcat1(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}