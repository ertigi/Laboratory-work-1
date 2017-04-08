//Вариант №2
//Найти наибольший делитель заданного числа N

#include <stdio.h>

#define N 99

int main()
{
	int k, n, c, c1;
	k = 0;
	c = 1;
	n = N;

	while (c < N) {
		k = n % c;
		if (k == 0)
			c1 = c;
		++c;
	}
	printf("k = %d", c1);
	getchar();
}
