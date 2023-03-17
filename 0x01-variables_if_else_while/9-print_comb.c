#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all lower case alphg
 *
 * Return: 0
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num++);
		if (num != 57)
			continue;	
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
