#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to reverse
 *
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	putchar('\n');

}
