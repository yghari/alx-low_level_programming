#include "main.h"

/**
  * more_numbers - printing all numbers
  *
  */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (j <= 10)
	{
		while (i <= 14)
		{
			if (i >= 10)
				putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			i++;
		}
		i = 0;
		putchar('\n');
		j++;
	}
}
