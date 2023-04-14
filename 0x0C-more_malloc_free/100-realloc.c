#include "main.h"
/**
 * _memcpy - fills memory with a constant byte
 * @src: poiter to the memory area
 * @dest: number of bytes
 * @n: the constant byte
 * Return: a pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: size of the previously allocated memory block
 * @new_size: size of the new memory block
 *
 * Return: pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* Step 1: Check if ptr is NULL */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	/* Step 2: Check if new_size is zero */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* Step 3: Allocate memory for new_size */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	/* Step 4: Copy contents of ptr to new block */
	_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	/* Step 5: Free old block */
	free(ptr);

	/* Step 6: Return pointer to new block */
	return (new_ptr);
}
