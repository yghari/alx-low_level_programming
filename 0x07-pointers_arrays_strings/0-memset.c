#include "main.h"

/**
 * _memset - an array
 * @s: the array
 * @b: the number of bytes to copy
 * @n: size of bytes
 * Return: the string
 */

char *_memset(char *s, char b, unsigned int n)
{

	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
