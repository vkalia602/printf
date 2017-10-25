#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>
/**
 * struct printformat - Struct printformat
 *
 * @form: format specifier
 * @f: function pointer
 */
typedef struct printformat
{
	char *form;
	int (*f)(va_list);
} print;
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_int(va_list ap);
int print_bin(va_list ap);
int convert(unsigned int value, unsigned int base);
int _putchar(char c);


#endif
