#include "holberton.h"
#include <stdarg.h>

#include <stdio.h>

/**
 * print_int   - Outputs interpolated argument from @ap
 *
 * @ap:          Variadic list of arguments to be processed
 *
 * Return:       Length of processed data
 */

int print_int(va_list ap)
{
      	int divisor = 1, length = 0;
	unsigned int c = 0;
	int value = va_arg(ap, int);

	if (value < 0)
	{
		_putchar('-');
		c = value * -1;
		length++;
	}
	else
	{
		c = value;
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

int convert(unsigned int value, unsigned int base)
{
	unsigned int answer = value % base;
	int depth = 1;

	value = value / base;

	if (value > 0)
	{
		depth = convert(value, base);
	}

	_putchar(answer + '0');
	return (1 + depth);
}


int print_bin(va_list ap)
{
	unsigned int value = va_arg(ap, int);
	unsigned int base = 2;
	int length = 0;

	length = convert(value, base);
	length -= 2;


	return (length);
}
