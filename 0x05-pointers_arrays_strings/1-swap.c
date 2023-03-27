#include "main.h"

/**
 * swap_int - writes the 98
 * @a: a pointer to get the value from
 * @b: second pointer to put the value in
 *
 */
void	swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
