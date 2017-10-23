#include "holberton.h"
#include <stdarg.h>
/**
 * print_char - prints all the parameters according to their format
 * @ap: format of the incoming parameters
 * Return: void
 */
void print_char(va_list ap)
{
	char s;

	s = va_arg(ap, int);
	_putchar(s);
}
/**
 * print_string - prints all the parameters according to their format
 * @ap:           Variadic list of arguments to be processed
 * Return: void
 */
void print_string(va_list ap)
{
	char *s;
	int i = 0;

	s = va_arg(ap, char*);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
