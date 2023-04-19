#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer to perform the printing.
 *
 * @name: A pointer to a string representing the name to print.
 * @f: A pointer to a function that takes a char pointer and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
