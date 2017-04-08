// Вариант №11
// Вычислить сумму делителей заданного числа N

#include <stdio.h>

int main()
{
	int n, i, c, c1;
	c = 1;
	c1 = 0;

	printf("N = ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; ++i) {
		c = n % i;
		if (c == 0)
			c1 = c1 + i;
	}

	printf("k = %d\n", c1);
	getchar();
}
