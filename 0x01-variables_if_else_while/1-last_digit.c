#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int i = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	/* your code goes there */
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, i);
	}
	else if (n > 5 && i != 0)
	{
		printf("Last digit of %d is %d and is greater than 5", n, i);
	}
	else
		printf("Last digit of %d is %d and is 0", n, i);
	printf("\n");
	return (0);
}
