// Вариант №9
// Вычислить число сочетаний из N по K   C = n! / ((n-k)! * k!)

#include <stdio.h>

int main()
{
	int k, n, nk, n1, k1, nk1, i, c;
	n1 = k1 = nk1 = 1;

	printf("N = ");
	scanf_s("%d", &n);

	printf("K = ");
	scanf_s("%d", &k);

	nk = n - k;

	for (i = 1; i <= n; ++i) {
		if (i <= k)
			k1 = k1 * i;
		if (i <= nk)
			nk1 = nk1 * i;
		n1 = n1 * i;
	}

	c = n1 / (nk1 * k1);

	printf("C = %d\n", c);
	getchar();
}
