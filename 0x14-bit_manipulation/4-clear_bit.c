#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the unsigned long int to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of bounds */
	if (sizeof(*n) * 8 < index)
		return (-1);

	/* Clear the bit at the specified index */
	*n &= ~(1 << index);

	return (1);
}
