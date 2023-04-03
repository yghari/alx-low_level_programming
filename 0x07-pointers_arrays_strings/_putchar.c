#include "main.h"

/**
 * _putchar : print charcters
 * @c : tha charchter
 */

int	_putchar(int c)
{
	return (write(1, &c, 1));
}
