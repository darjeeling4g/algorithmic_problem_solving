#include <stdio.h>

int	main()
{
	int	num[9];
	int	max;
	int	position;

	for (int i = 0; i < 9; i++)
		scanf("%d", &num[i]);
	max = 0;
	for (int i = 0; i < 9; i++)
	{
		if (max <= num[i])
		{
			max = num[i];
			position = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", position);
}
