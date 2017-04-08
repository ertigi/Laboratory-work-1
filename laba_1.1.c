//Вариант №1
//Вычислить число k, такое, что 1 + 2 + 3 + … + k не превышает заданное N

#include <stdio.h>

int main()
{
	int k, n, c;
	k = c = 0;

	printf("N = ");
	scanf_s("%d", &n);

	do {
		++k;
		c = c + k;
	} while (c < n);

	printf("k = %d", k - 1);
	getchar();
}
