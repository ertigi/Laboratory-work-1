// Вариант №7
// Найти наибольшее число k, квадрат которого не превышает заданное N

#include <stdio.h>
#include <math.h>

int main()
{
	float c, n;

	printf("N = ");
	scanf_s("%f", &n);

	c = sqrt(n);

	printf("k = %f\n", c);
	getchar();
}
