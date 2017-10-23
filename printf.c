#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * interpolate     - Assist printf with data interpolation in @string
 *
 * @format:          The main string passed in to be printed
 * @i:               Index in @format when interpolation is triggered
 * @ap:              Variadic list containing arguments to be processed
 *
 * Return:           (i) to printf so it may continue to process @format
 */

int interpolate(const char *format, int i, va_list ap)
{
	int escape = 0, j = 0;

	print fmt[] = {
	{"c", print_char}, {"s", print_string},
	{"i", print_int}, {"d", print_int},
	{NULL, NULL},
	};

	while (fmt[j].form != NULL)
	{
		if (*(fmt[j].form) == format[i + 1])
		{
			fmt[j].f(ap);
			i++;
			escape = 1;
		}
		j++;
	}

	if (escape == 0)
	{
		_putchar('%');
		if (format[i + 1] != '%')
		{
			_putchar(format[i + 1]);
		}
		i++;
	}

	return (i);
}

/**
 * _printf         - Print @format and interpolate data as needed
 *
 * @format:          The main string passed in to be printed
 *
 * Return:           (0) Success
 */


int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i = interpolate(format, i, ap);
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (0);
}
