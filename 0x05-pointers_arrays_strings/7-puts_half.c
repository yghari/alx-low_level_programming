#include "main.h"

/**
 * puts_half - print a half a string
 * @str: the string that we going to cut
 *
 */

void	puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if ((i % 2) == 0)
	{
		i = i / 2;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (i + 1) / 2;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
}
