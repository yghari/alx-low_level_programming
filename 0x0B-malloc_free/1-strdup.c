#include "main.h"

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
	i = strlen(str);
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
