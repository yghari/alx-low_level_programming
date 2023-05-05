#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be
 * @n: The first number.
 * @m: The second number to convert to.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	/* Calculate the bitwise difference between n and m */
	diff = n ^ m;

	/* Count the number of set bits in the difference */
	counter = 0;
	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
