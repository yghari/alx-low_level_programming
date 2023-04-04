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
	unsigned int	res_1;
	unsigned int	res_2;

	i = 0;
	res_1 = 0;
	res_2 = 0;
	j = size * size;
	res_1 = a[0];
	while (i < j)
	{
		res_1 = res_1 + a[i];
		i = (size + i + 1);
	}
	i = 0;
	while (i < j - 1)
	{
		res_2 = res_2 + a[i];
		i = size + i - 1;
	}
	printf("%d, %d\n", res_1, res_2);
}
