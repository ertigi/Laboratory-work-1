// Вариант №8
// Посчитать количество делителей заданного числа N

#include <stdio.h>
#include <math.h>

int main()
{
	int i, c, c1, n;
	c1 = c = 0;
	printf("N = ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; ++i) {
		c = n % i;
		if (c == 0)
			++c1;
	}

	printf("k = %d\n", c1);
	getchar();
}
