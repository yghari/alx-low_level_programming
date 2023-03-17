#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 57)
	{
		while (b < 58)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar (' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
