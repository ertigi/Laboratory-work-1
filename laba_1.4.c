//Вариант №4
// Вычислить число перестановок из N по K ( N! )

#include <stdio.h>
#include <math.h>

int main()
{

	unsigned long long c;
	int i, n;
	c = 1;

	printf("N = ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; ++i)
		c = c * i;

	if (n == 0)
		printf("N! = 1\n");
	else 
		printf("N! = %u\n", c);
	getchar();
}
