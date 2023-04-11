#include "main.h"

/**
 * create_array - creating an array with a specfic task
 * @c: the specific charcter
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;
	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	if (arr == 0)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
