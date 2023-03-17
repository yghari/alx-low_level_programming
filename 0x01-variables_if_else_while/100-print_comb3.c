#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b;

	while (a < 57)
	{
		b = 49;
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar (' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
