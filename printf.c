#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * interpolate     - Assist printf with data interpolation in @string
 *
 * @format:          The main string passed in to be printed
 * @i:               Index in @format when interpolation is triggered
 * @ap:              Variadic list containing arguments to be processed
 * @length:          Total length of @format up to current processing
 *
 * Return:           (i) to printf so it may continue to process @format
 */

int interpolate(const char *format, int i, va_list ap, int length)
{
	int escape = 0, j = 0;

	print fmt[] = {
	{"c", print_char}, {"s", print_string},
	{"i", print_int}, {"d", print_int},
	{NULL, NULL}
	};

	while (fmt[j].form != NULL)
	{
		if (*(fmt[j].form) == format[i + 1])
		{
			length += fmt[j].f(ap);
			i++;
			escape = 1;
		}
		j++;
	}

	if (escape == 0)
	{
		_putchar('%');
		length++;
		if (format[i + 1] != '%')
		{
			_putchar(format[i + 1]);
			length++;
		}
		i++;
	}

	return (length);
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
	int i = 0, length = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			length = interpolate(format, i, ap, length);
			i++;
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
		i++;
	}
	va_end(ap);
	return (length);
}
