#include "main.h"

/**
 * _memcpy -  function copies n bytes
 * @src: pointer to the src
 * @dest: pointer to the dest
 * @n: the size of bytes to copy
 * Return: a pointer to the the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
