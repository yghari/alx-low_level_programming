#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: the string
 *
 * Return: the lenght of the string s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2);

	if (n >= j)
		n = j;

	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);

	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}

	while (l < n)
	{
		ptr[k] = s2[l];
		k++;
		l++;
	}

	ptr[k] = '\0';

	return (ptr);
}
