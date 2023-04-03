#include "main.h"

/**
 * _strchr -  search for the first occurance
 * @s: pointer to the src
 * @c: the character
 * Return: a pointer to the the dest
 */

char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((s + i));
		i++;
	}
	return (NULL);
}
