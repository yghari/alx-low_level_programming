#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * str_concat - creating an array contans another str
 * @s1: second str
 * @s2: first str
 *
 * Return: allocated str that contains both.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int oi;
	unsigned int oj;
	char *str;

	if (s1 && s2)
	{
		oi = _strlen(s1);
		oj = _strlen(s2);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		oi = 0;
		oj = 0;
	}
	else if (s1 == NULL)
	{
		oi = 0;
		oj = _strlen(s2);
	}
	else if (s2 == NULL)
	{
		oj = 0;
		oi = _strlen(s1);
	}
	str = (char *)malloc(sizeof(char) * (oi + oj + 1));
	if (!str)
		return (NULL);
	for (i = 0; i < oi; i++)
		str[i] = s1[i];
	for (j = 0; j < oj; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
