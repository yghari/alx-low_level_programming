#include "main.h"

/**
 * *_strcpy - pointer to funtion that copy a string to another destination
 * @dest: the destination
 * @src: the string
 *
 * Return: return the dest that contains the value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
