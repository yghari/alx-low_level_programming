#include "main.h"

/**
 * reverse_array - reverse elements of an array
 * @a: the array
 * @n: the number of bytes to copy
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int j;

	i = 0;
	j = n - 1;
	tmp = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
