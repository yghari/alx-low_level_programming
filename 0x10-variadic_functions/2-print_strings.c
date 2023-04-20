#include "variadic_functions.h"
/**
 * print_strings - prints a list of numbers
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ptr;

	va_start(ptr, n);

	while (i < n)
	{
		str = va_arg(ptr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
