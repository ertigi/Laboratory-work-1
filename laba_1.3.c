//Вариант №3
//Определить, является ли заданное число N полным квадратом

#include <stdio.h>
#include <math.h>
#include <locale.h>

#define N 100

int main()
{
	setlocale(LC_ALL, "en_US.UTF-8");

	int c;
	float n;
	n = N;
	c = '√';
	printf("%lcn = %f", 251, sqrtf(n));
	getchar();
}
