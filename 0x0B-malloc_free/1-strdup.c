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

	i = strlen(str);
	if (i == 0)
		return (NULL);
	arr = malloc((i + 1) * sizeof(char));
	if (arr == NULL || str == NULL)
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
