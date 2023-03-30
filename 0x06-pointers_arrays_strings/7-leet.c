#include "main.h"

/**
 * leet - change a string to leet. STRANGER = S7R4NG3R
 * @s: Pointer to a string.
 *
 * Return: Pointer to the modified string.
 */

char *leet(char *s)
{
	int i;
	int j;
	char str[] = "aeotl";
	char str2[] = "AEOTL";
	char num[] = "43071";

	i = 0;
	j = 0;

	while (s[j])
	{
		i = 0;
		while (i < 5)
		{
			if (s[j] == str[i] || s[j] == str2[i])
			{
				s[j] = num[i];
				break;
			}
			i++;
		}
		j++;
	}
	return (s);
}
