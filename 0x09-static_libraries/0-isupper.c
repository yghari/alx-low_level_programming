#include "main.h"

/**
 * _isupper - check a character if uper.
 *@c : the number to be checked
 *
 * Return:  0 if nont uppercase.
 * return : 1 if uppercase;
 */

int	_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
