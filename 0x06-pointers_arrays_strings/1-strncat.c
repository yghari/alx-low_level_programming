#include "main.h"

/**
 * _strncat - cating  of a string src to a string dest
 * @src: the src string
 * @dest: the dest string
 * @n: the number of bytes to copy
 * Return: a pointer to the the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	l = 0;
	i = 0;
	while (dest[l])
		l++;
	while (i < n && src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l + 1] = '\0';
	return (dest);
}
