#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: poiter to the memory area
 * @n: number of bytes
 * @b: the constant byte
 * Return: a pointer to the memory area @s
 */

char	*_memset(char *s, char b, unsigned int n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each element in the array.
 *
 * Return: pointer to the allocated memory, or NULL if nmemb or size is 0 or if
 *         malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
