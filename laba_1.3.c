//Вариант №3
//Определить, является ли заданное число N полным квадратом

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "en_US.UTF-8");

	int c;
	float n;
	
	printf("N = ");
	scanf_s("%f", &n);

	printf("%lcn = %f", 251, sqrtf(n));
	getchar();
}
