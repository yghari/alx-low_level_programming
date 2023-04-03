#include "main.h"
/**
 * _strspn - locates a character in a string.
 * @s: String
 * @accept: character
 * Return: NULL
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				j = 0;
				i++;
			}
			else
				j++;
		}
		break;
	}
	return (count);
}
