#include <stdio.h>

int main()
{
	long double num1;
	long double num2;

	scanf("%Lf %Lf", &num1, &num2);
	printf("%16.19Lf", num1/num2);
}
