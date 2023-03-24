#include "main.h"

/**
  * main - printing fizz or buzz
  *
  * Return: always return 0
  */
int	main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			i++;
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			i++;
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			i++;
		}
		else
			printf("%d", i++);
		printf(" ");
	}
	return (0);
}
