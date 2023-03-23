#include "main.h"

/**
  * print_diagonal - printing diagonal lines of n number
  *@n: number of lines
  *
  */

void print_diagonal(int n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			j = i;
			while (j)
			{
				putchar(' ');
				j--;
			}
			putchar('\\');
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
