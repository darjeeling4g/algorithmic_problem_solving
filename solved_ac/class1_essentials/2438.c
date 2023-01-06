#include <stdio.h>

int	main()
{
	int	num;
	int	i;
	int	j;

	scanf("%d", &num);
	i = 0;
	while (i < num)
	{
		j = 0;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
