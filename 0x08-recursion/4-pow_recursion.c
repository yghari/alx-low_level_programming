#include "main.h"

/**
 * _pow_recursion - put recursion
 * @x: var
 * @y: var
 * Return: a pointer to the memory area @s
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
