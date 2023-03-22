#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: there is no return only printing.
 */

void	jack_bauer(void)
{
	int hours;
	int minutes;

	hours = 0;
	minutes = 0;
	while (hours < 24)
	{
		while (minutes < 60)
		{
			putchar(hours / 10 + 48);
			putchar(hours % 10 + 48);
			putchar(':');
			putchar(minutes / 10 + 48);
			putchar(minutes % 10 + 48);
			minutes++;
			putchar('\n');
		}
		minutes = 0;
		hours++;
	}
}
