#include <stdio.h>
#include <windows.h>
#pragma warning(disable: 4996)
int main()
{
	int money = 39;
	int sum = 0;
	int count = 0;
	while (money) {
		sum += money;
		if (money % 2 != 0) {
			count++;
		}
		money = money / 2;
	}
	while (count = count / 2) {
		sum += count;
	}
	printf("%d\n",sum);
	system("pause");
    return 0; 
}