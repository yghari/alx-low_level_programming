#include "main.h"

/**
 * print_sign - Print sign of a number.
 * @n: Th number to be checked
 *
 * Return: 1 if n is greater than 0 , print +
 *  0 if n is zero .  print 0
 * -1 if n is less than zero . print -
 */

int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	else
		return (0);
}
