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
		putchar(num++);
	num = 97;
	while (num >= 97 && num <= 102)
		puthchar(num++);
	putchar('\n');
	return (0);
}
