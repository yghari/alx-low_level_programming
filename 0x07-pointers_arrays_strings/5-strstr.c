#include "main.h"

/**
 * _strstr - locates a character in a string.
 * @haystack: String
 * @needle: character
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (haystack + i);
		}
		if (!needle[j])
			return (haystack + i);
		i++;
	}
	return (NULL);
}
