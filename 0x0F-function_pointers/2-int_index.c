#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array using a  function
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: a pointer to the function to use to compare integers
 *
 * Return: the index of the first element
 * not return 0, or -1 if no elements match or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
