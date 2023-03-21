#include "main.h"

/**
 * print_last_digit - last digit of an int
 * @n : the variable that contains the number
 *
 * Return: the last digit in n.
 */

int	print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (n < 0)
		lastd = lastd * -1;
	_putchar(lastd + 48);
	return (0);
}
