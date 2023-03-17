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
	int num = 122;

	while (num >= 97)
		putchar(num--);
	putchar('\n');
	return (0);
}
