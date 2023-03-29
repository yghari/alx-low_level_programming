#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the src string
 * @s2: the dest string
 * Return: a int contains the value of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int is1;
	int nbr;

	nbr = 0;
	is1 = 0;
	while (s1[is1] && s2[is1])
	{
		nbr = (s1[is1] - s2[is1]);
		if (nbr != 0)
		{
			break;
		}
		is1++;
	}
	return (nbr);
}
