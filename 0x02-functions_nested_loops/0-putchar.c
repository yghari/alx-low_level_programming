#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char ar[] = "_putchar\n";

	i = 0;
	while (i < 9)
	{
		putchar(ar[i]);
		i++;
	}
	return (0);
}
