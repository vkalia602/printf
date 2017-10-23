#include "holberton.h"
#include <stdarg.h>
int print_int(va_list ap)
{
	int c, i, output, reverse = 0, depth = 0;
	c = va_arg(ap, int);

	if (c < 0)
	{
		_putchar('-');
		c *= -1;
	}

	while (c != 0)
	{
		reverse *= 10;
		reverse += (c % 10);
		c /= 10;
		depth++;
	}

	depth = depth == 0 ? 1 : depth;

	for (i = 0; i < depth; i++)
	{
		output = reverse % 10;
		_putchar(output + '0');
		reverse /= 10;
	}
	return (depth);
}
