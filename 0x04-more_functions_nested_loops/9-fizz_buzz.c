#include "main.h"

/**
  * fizz_buzz - printing fizz or buzz
  *
  */
void	fizz_buzz(void)
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
}
