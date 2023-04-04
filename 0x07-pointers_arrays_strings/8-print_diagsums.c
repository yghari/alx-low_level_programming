#include "main.h"

/**
 * print_diagsums - diagram
 * @a: String
 * @size: size of array
 * Return: NULL
 */

void print_diagsums(int *a, int size)
{
	int	i;
	int	j;
	int	res1;
	int	res2;

	i = 0;
	res1 = 0;
	res2 = 0;
	j = size * size;
	res1 = a[0];
	while (i < j)
	{
		res1 = res1 + a[i];
		i = (size + i + 1);
	}
	i = 0;
	while (i < j - 1)
	{
		res2 = res2 + a[i];
		i = size + i - 1;
	}
	printf("%d, %d\n", res1, res2);
}
