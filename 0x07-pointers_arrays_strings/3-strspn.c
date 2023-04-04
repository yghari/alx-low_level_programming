#include "main.h"
/**
 * _strspn - locates a character in a string.
 * @s: String
 * @accept: character
 * Return: NULL
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int	n;
	int		i;
	int		j;

	i = 0;
	n = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
			break;
		i++;
	}
	return (n);
}
