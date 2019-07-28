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
int _putchar(char c);
int print_char(va_list arguments);
int print_str(va_list arguments);
int print_percent(va_list arguments);
int print_number(va_list arguments);
#endif
