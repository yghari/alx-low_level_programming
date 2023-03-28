#include "main.h"

/**
 * * _atoi - pointer to funtion that copy a string to another destination
 * @s: the destination
 *
 * Return: return the the string to an int
 */
int	_atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int number = 0;

	while (*(s + 1))
	{
		if (*(s + 1) == '-')
			sign *= -1;
		else if (*(s + 1) >= '0' && *(s + i) <= '9')
			number = (number * 10) + (*(s + i) - '0');
		else if (number > 0)
			break;
		i++;
	}
	return (number * sign);
}
