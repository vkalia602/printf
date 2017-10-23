#include "holberton.h"
#include <stdarg.h>
void print_int(va_list ap)
{
	int c;
	c = va_arg(ap, int);
	_putchar(c + '0');
}
