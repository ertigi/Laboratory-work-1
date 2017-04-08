//Вариант №2
//Найти наибольший делитель заданного числа N

#include <stdio.h>


int main()
{
	int k, n, c, c1;
	k = 0;
	c = 1;

	printf("N = ");
	scanf_s("%d", &n);

	while (c < n) {
		k = n % c;
		if (k == 0)
			c1 = c;
		++c;
	}
	printf("k = %d", c1);
	getchar();
}
