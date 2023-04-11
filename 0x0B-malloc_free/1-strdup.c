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
 * _strdup - creating an array with a specfic task
 * @str: the string of the memory to print
 * Return: the string arr.
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *arr;

	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	arr = malloc((i + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i + 1] = '\0';
	return (arr);
}
