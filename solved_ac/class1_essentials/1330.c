#include <stdio.h>

int	main()
{
	int	num1;
	int	num2;

	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("%c", '>');
	else if (num1 < num2)
		printf("%c", '<');
	else if (num1 == num2)
		printf("%s", "==");
}
