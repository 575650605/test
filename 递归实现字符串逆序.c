#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
void  reverse_string(char * string1, char * string2)
{ 
	if (*(string1 + 1) != '\0') 
	{
		reverse_string(string1 + 1, string2);
	}
	static int count = 0;
	*(string2 + count) = *string1;
	count++;
}

int main()
{
	void reverse_string(char * string, char * string2);
	char str1[] = { "abcdef" };
	char str2[20] = {""};
	reverse_string(str1, str2);
	printf("%s\n", str2);
	system("pause");
	return 0;
}