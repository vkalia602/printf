#include "holberton.h"
#include <stdarg.h>


/**
 * print_int   - Outputs interpolated argument from @ap
 *
 * @ap:          Variadic list of arguments to be processed
 *
 * Return:       Length of processed data
 */

int print_int(va_list ap)
{
	int c, divisor = 1, length = 0;

	c = va_arg(ap, int);

	if (c < 0)
	{
		_putchar('-');
		c *= -1;
		length++;
	}

	while (c / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((c / divisor) + '0');
		c %= divisor;
		divisor /= 10;
		length++;
	}

	return (length);
}
