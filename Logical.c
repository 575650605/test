#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int judge(int Ranking[])
{
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (Ranking[i] == Ranking[j]) {
				return 0;
			}
		}
	}
	return 1;
}
void reason(int Ranking[])
{
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	for (a = 1; a < 6; a++) {
		for (b = 1; b < 6; b++) {
			for (c = 1; c < 6; c++) {
				for (d = 1; d < 6; d++) {
					for (e = 1; e < 6; e++) {
						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 \
							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1) {
							Ranking[0] = a;
							Ranking[1] = b;
							Ranking[2] = c;
							Ranking[3] = d;
							Ranking[4] = e;
							if (judge(Ranking)) {
								return;
							}
						}
					}
				}
			}
		}
	}
}
int main()
{
	int Ranking[5];
	char a = 'A';
	reason(Ranking);
	for (int i = 0; i < 5; i++) {
		printf("%cµÄÃû´Î£º",a);
		printf("%d\n",Ranking[i]);
		a++;
	}
	system("pause");
	return 0;
}