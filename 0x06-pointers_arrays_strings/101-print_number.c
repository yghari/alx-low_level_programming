#include "main.h"

/**
 * print_number - change a string to rot13. STRANGER = FGENATRE
 * @n:the number .
 *
 */

void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
		print_number(n);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else if (n <= 9)
		_putchar(n + 48);
}
