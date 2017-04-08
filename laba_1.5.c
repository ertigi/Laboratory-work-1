// Определить, является ли заданное число N простым

#include <stdio.h>

#define N 7

int main()
{
	int i, n, c, c1;
	n = N;
	c1 = c = 0;
	for (i = 2; i < N; ++i) {
		c = n % i;
		if (c == 0)
			++c1;
		c = 0;
	}
	if (c1 > 0)
		printf("1\n");
	if (c1 == 0)
		printf("2\n");
	getchar();
}
