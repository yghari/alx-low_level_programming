#include "main.h"
#include <stdio.h>
/**
 * main - printfirst arg to stdout
 * @argc: size
 * @argv: arguments
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
