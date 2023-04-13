#include "main.h"
/**
 * malloc_checked - check if malloc gone right
 * @b: The size to allocat
 *
 * Return: On success pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
