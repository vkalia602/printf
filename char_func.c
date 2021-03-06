#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * print_char - prints all the parameters according to their format
 * @ap: format of the incoming parameters
 * Return: void
 */
int print_char(va_list ap)
{
	char s;

	s = va_arg(ap, int);
	_putchar(s);
	return (1);
}
/**
 * print_string - prints all the parameters according to their format
 * @ap: Variadic list of arguments to be processed
 * Return: void
 */
int print_string(va_list ap)
{
	char *s;
	int i = 0;

	s = va_arg(ap, char*);

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
