#include "main.h"

/**
 * _strncpy - copying  of a string src to a string dest
 * @src: the src string
 * @dest: the dest string
 * @n: the number of bytes to copy
 * Return: a pointer to the the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int is;
	int id;

	id = 0;
	is = 0;
	while (src[is])
	{
		if (is < n)
			dest[is] = src[is];
		is++;
	}
	dest[is] = '\0';
	return (dest);
}
