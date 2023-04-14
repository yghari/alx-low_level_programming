#include "main.h"

/**
 * array_range - creates an array of integers from min to max, inclusive
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *ptr;
	int count, i;

	i = 0;
	count = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * count);
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
