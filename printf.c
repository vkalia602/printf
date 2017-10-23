#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j;

	print fmt[] = {
	{"c", print_char},
	{"s", print_string},
	{"i", print_int},
	{"d", print_int},
	{NULL, NULL},
	};

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (fmt[j].form != NULL)
			{
				if (*(fmt[j].form) == format[i + 1])
				{
					fmt[j].f(ap);
					i++;
				}
				j++;
			}
			if (fmt[j].form == NULL)
			{
				_putchar(format[i + 1]);
				i++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
