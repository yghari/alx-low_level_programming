#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _isdigit - printfirst arg to stdout
 * @c: size
 * Return: On success 0.
 */

int _isdigit(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		if (c[i] >= 48 && c[i] <= 57)
			i++;
		else
			return (1);
	}
	return (0);
}

/**
 * main - printfirst arg to stdout
 * @argc: size
 * @argv: arguments
 * Return: On success 0.
 */

int main(int argc, char **argv)
{
	int i;
	int add;

	i = 1;
	add = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
