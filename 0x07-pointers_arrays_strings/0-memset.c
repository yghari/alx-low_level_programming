#include "main.h"

/**
 * _memset - copying  of a string src to a string dest
 * @s: pointer to the src
 * @b: the charactere
 * @n: the size or
 * Return: a pointer to the the dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count;

	count = 0;
	while (n-- > 0)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}
