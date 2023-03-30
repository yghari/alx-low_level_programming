#include "main.h"

/**
 * rot13 - change a string to rot13. STRANGER = FGENATRE
 * @s: Pointer to a string.
 *
 * Return: Pointer to the modified string.
 */

char *rot13(char *s)
{
	int i;
	char s2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s[i] == s2[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
