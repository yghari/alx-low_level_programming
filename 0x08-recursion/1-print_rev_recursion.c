#include "main.h"

/**
 * _print_rev_recursion - put recursion
 * @s: poiter to the memory area
 * Return: a pointer to the memory area @s
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
