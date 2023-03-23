#include "main.h"

/**
  * print_line - printing lines of n number
  *@n: number of lines
  *
  */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
