#include "holberton.h"
#include <stdarg.h>
/**
 * print_all - prints all the parameters according to their format
 * @format: format of the incoming parameters
 * Return: void
 */
void print_char(va_list ap)
{
	char s;
	s = va_arg(ap, int);
	_putchar(s);
}
/**
 * print_all - prints all the parameters according to their format
 * @ap:
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