#include <stdio.h>

int	main()
{
	int	test;

	scanf("%d", &test);

	int		repeat[test];
	char	str[test][21];

	for (int i = 0; i < test; i++)
		scanf("%d %s", &repeat[i], str[i]);
	
	for (int i = 0; i < test; i++)
	{
		for (int j = 0; str[i][j]; j++)
		{
			for (int k = 0; k < repeat[i]; k++)
				printf("%c", str[i][j]);
			printf("%c", str[i][j + 1]);
			printf("%d", j);
		}
		printf("\n");
	}
}
