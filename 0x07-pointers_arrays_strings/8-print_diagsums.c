#include "main.h"

/**
 * print_diagsums - diagram
 * @a: String
 * @size: size of array
 * Return: NULL
 */

void	print_diagsums(int *a, int size)
{
	int	i;
	int	j;
	int	sum1;
	int	sum2;

	i = 0;
	j = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 += a[(size + 1) * i];
		i++;
	}
	while (j < size)
	{
		sum2 += a[(size - 1) * (j + 1)];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
