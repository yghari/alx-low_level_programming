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

	i = 0;
	tmp = 0;
	while (i <= n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
