#include <stdio.h>
/**
 * main - printfirst arg to stdout
 * @argc: size
 * @argv: arguments
 * Return: On success 0.
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
