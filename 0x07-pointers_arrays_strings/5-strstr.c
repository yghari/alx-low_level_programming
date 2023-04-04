#include "main.h"

/**
 * _strstr - locates a character in a string.
 * @haystack: String
 * @needle: character
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
