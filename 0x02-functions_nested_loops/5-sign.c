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
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
