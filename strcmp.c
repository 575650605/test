#include <stdio.h>
#include <windows.h>
#pragma warning(disable: 4996)
int str_cmp(char arr1[], char arr2[])
{
	int j = 0;
	while (arr2[j] != '\0') {
		if (arr1[j] != arr2[j]) {
			return 0;
		}
		j++;
	}
	return 1;

}
int main()
{
	char arr1[10] = "abcd";
	char arr2[10] = "abcd";
	printf("%d\n",str_cmp(arr1, arr2));
	system("pause");
    return 0; 
} 