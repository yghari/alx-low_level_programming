#include "main.h"

/**
 * _puts - print a string to the stdout
 * @str: the string
 *
 */

void	_puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
