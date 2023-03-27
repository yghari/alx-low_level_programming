#include "main.h"

/**
 * print_array - print a half a string
 * @a: the array
 * @n: number of elements
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
			printf(", ");
		i++;
	}
	putchar('\n');
}
