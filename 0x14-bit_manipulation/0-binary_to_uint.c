#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: the string
 *
 * Return: the lenght of the string s
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);

}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string representing a binary number.
 *
 * Return: The unsigned int value of the binary number, or 0 if b is NULL or
 *         contains a character that is not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len, i = 0;

	if (b == NULL)
		return (res);

	len = _strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			res = (res << 1) | 1;
		else if (b[i] == '0')
			res <<= 1;
		else
			return (0);
	}
	return (res);
}
