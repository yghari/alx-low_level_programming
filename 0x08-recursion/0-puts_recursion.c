#include "main.h"

/**
 * _puts_recursion - put recursion
 * @s: poiter to the memory area
 * Return: a pointer to the memory area @s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return (0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
