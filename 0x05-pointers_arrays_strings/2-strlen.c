#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: the string
 *
 * Return: the lenght of the string s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);

}
