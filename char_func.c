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

/**
 * *rot13 - function that encodes a string using rot13
 * @s: character string being evaluated
 * Return: s.
 */
int print_rot13(va_list ap)
{
	char *s;
	char m[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		    'L', 'M', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		    'j', 'k', 'l', 'm'};
	char k[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		    'Y', 'Z', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		    'w', 'x', 'y', 'z'};
	int i, j;

	s = va_arg(ap, char *);
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (m[j] || k[j])
		{
			if (s[i] == m[j])
			{
				s[i] = k[j];
			}
			else if (s[i] == k[j])
			{
				s[i] = m[j];
			}
			_putchar(s[i]);
			j++;
		}
		i++;
	}
	return (i);
}
