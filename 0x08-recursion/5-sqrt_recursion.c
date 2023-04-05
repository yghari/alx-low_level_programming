#include "main.h"

/**
 * _sqrt - put recursion
 * @n: var
 * @i: indice
 * Return: a pointer to the memory area @s
 */
int  _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - put recursion
 * @n: var
 * Return: a pointer to the memory area @s
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	return (_sqrt(n, i));
}
