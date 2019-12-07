#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int main()
{
	int i = 0;
	int j = 0;
	int begin = 0;
	int end = 0;
	char a[] = "I like beijing";
	char temp;
	printf("%s\n",a);
	j = strlen(a) - 1;
	while (j > i) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
	i = 0;
	while (a[i]) {
		if (a[i] != ' ')
		{
			begin = i;
			while (a[i] && a[i] != ' ')
			{
				i++;
			}
			i = i - 1;
			end = i;
		}

		while (end > begin)
		{
			temp = a[begin];
			a[begin] = a[end];
			a[end] = temp;
			end--;
			begin++;
		}

		i++;
	}
	printf("%s\n",a);
	system("pause");
	return 0;
}
