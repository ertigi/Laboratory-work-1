// Вариант №10
// Вычислить число k, такое, что k! не превышает заданное N

#include <stdio.h>

int main()
{
	int n, i, c;
	i = c = 1;

	printf("N = ");
	scanf_s("%d", &n);

	while (c <= n) {
		c = c * i;
		++i;
	}

	printf("k = %d\n", i - 1);
	getchar();
}
