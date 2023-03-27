#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 */

void rev_string(char *s)
{
	int len;
	int j;
	char tmp;

	j = 0;
	len = 0;
	while (*(s + len))
		len++;
	len--;
	while (len >= j)
	{
		tmp = *(s + len);
		*(s + len) = *(s + j);
		*(s + j) = tmp;
		len--;
		j++;
	}

}
