// Вариант №5
// Определить, является ли заданное число N простым

#include <stdio.h>

int main()
{
	int i, n, c, c1;
	c1 = c = 0;

	printf("N = ");
	scanf_s("%d", &n);

	for (i = 2; i < n; ++i) {
		c = n % i;
		if (c == 0)
			++c1;
		c = 0;
	}
	if (c1 > 0)
		printf("no\n");
	if (c1 == 0)
		printf("yes\n");
	getchar();
}
