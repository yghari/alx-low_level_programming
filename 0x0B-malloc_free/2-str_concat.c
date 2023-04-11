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
	char *str;

	if (s1 && s2)
	{
		i = _strlen(s1);
		j = _strlen(s2);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		i = 0;
		j = 0;
	}
	else if (s1 == NULL)
	{
		i = 0;
		j = _strlen(s2);
	}
	else if (s2 == NULL)
	{
		j = 0;
		i = _strlen(s1);
	}
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
