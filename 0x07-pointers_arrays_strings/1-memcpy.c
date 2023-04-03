#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: poiter to the memory area
 * @n: number of bytes
 * @b: the constant byte
 * Return: a pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = src;
	char *pdest = dest;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}

	return (dest);
}
