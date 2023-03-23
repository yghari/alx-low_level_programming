#include "main.h"

/**
  * print_most_numbers - printing all numbers exept 2 and 4
  *
  */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
			i++;
		putchar(i++);
	}
	putchar('\n');
}
