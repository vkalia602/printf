#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
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
int _putchar(char c);
#endif
