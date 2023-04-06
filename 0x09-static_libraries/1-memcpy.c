#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @src: poiter to the memory area
 * @dest: number of bytes
 * @n: the constant byte
 * Return: a pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
