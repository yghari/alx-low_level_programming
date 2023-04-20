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

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(args, int));
	}

	printf("\n");
	va_end(args);
}
