#include "main.h"

/**
 * factorial - put recursion
 * @n: the number poiter to the memory area
 * Return: a pointer to the memory area @s
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
