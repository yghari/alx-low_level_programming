#include "main.h"

/**
 * puts2 - print a string
 * @str: the string to reverse
 *
 */

void	puts2(char *str)
{
	int j;

	j = 0;
	while (*(str + j))
	{
		if(j % 2 == 0)
			_putchar(*(str + j));
		j++;
	}
	putchar('\n');
}
