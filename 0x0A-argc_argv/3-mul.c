#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - printfirst arg to stdout
 * @argc: size
 * @argv: arguments
 * Return: On success 0.
 */

int main(int argc, char **argv)
{
	int n1;
	int n2;
	int sum;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	sum = n1 + n2;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
