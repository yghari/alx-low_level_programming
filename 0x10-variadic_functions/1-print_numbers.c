#include "variadic_functions.h"

/**
 * print_numbers - prints a variable number of integers
 * @separator: the string to print between integers
 * @n: the number of integers to print
 * @...: the variable arguments containing the integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	i = 0;
	va_start(args, n);

	if (n == 0)
		exit(0);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		i++;
		if (i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
