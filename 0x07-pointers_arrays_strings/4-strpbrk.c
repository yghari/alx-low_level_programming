#include "main.h"

/**
 * _strpbrk - locates a character in a string.
 * @s: String
 * @accept: character
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
