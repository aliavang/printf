#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
  * struct print - option for args to print
  * @op: operator
  * @f: function to choose
  */

typedef struct print
{
	char *op;
	int (*f)(va_list arguments);
} op_t;
int _printf(const char *format, ...);
int get_counter(const char *format, op_t ops[], va_list arguments);
int _putchar(char c);
int print_char(va_list arguments);
int print_str(va_list arguments);
int print_percent(va_list arguments);
int print_number(va_list arguments);
char *convert(unsigned int, int base);
int print_binary(va_list arguments);
int print_unsigned(va_list arguments);
int print_octal(va_list arguments);
int print_x(va_list arguments);
#endif
