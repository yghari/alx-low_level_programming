#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to a string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
				|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
