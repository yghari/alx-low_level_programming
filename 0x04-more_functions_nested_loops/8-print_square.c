#include "main.h"

/**
  * print_square - printing square of size number
  *@size: number of squares
  *
  */

void print_square(int size)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
