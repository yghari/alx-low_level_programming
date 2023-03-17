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
	int num = 97;

	while (num <= 122)
	{
		if (num == 101 || num == 113)
			num++;
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
