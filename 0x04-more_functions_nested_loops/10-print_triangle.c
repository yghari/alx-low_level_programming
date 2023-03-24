#include <stdio.h>
#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: size of triangle
  *
  * Return: void
  */
void print_triangle(int size)
{
	int i = 1;
	int j = size - 1;
	int k = 1;

	if (size > 0)
	{
		while (i <= size)
		{
			while (j)
			{
				putchar(' ');
				j--;
			}
			while (k)
			{
				putchar('#');
				k--;
			}
			putchar('\n');
			i++;
			j = size - i;
			k = i;
		}
	}
	else
		putchar('\n');
}
