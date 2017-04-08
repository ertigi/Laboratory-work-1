//Вычислить число k, такое, что 1 + 2 + 3 + … + k не превышает заданное N

#include <stdio.h>

#define N 100
int main()
{
	int k, n, c;
	k = c = 0;
	n = N;
	do {
		++k;
		c = c + k;
	} while (c < n);
	printf("k = %d", k-1);
	getchar();
}
