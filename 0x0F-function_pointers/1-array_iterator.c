#include "function_pointers.h"

/**
 * array_iterator - iterates over an array and performs an action
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to perform on each element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
