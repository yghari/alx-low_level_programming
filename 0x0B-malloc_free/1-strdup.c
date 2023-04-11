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
	arr = malloc(i * sizeof(char));
	if (arr == 0 || str == 0)
		return (NULL);
	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
