#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of a variable number of integers
 * @n: the number of integers passed to the function
 * @...: the variable arguments containing the integers to be summed
 *
 * Return: the sum of the integers passed to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma;
	va_list args;

	i = 0;
	suma = 0;
	va_start(args, n);

	if (n == 0)
		return (0);
	while (i < n)
	{
		suma += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (suma);
}
