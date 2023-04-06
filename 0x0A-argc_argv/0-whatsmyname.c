#include <stdio.h>
/**
 * main - printfirst arg to stdout
 * @argc: size
 * @argv: arguments
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
