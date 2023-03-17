#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all lower case alpha
 *
 * Return: 0
*/
int main(void)
{
	int num = 97;

	while (num <= 122)
		putchar(num++);
	putchar("\n");
	return (0);
}
