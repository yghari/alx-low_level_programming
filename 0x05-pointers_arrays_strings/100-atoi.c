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
	int number = 0;

	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		number = (number * 10) + (s[i] - '0');
		i++;
	}
	return (number * sign);
}
