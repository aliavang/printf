#include "holberton.h"
#include <stdarg.h>
/**
  *_printf - produces output according to a format
  * @format: character string
  * Return: int
  */
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"S", print_S},
		{"%", print_percent},
		{"d", print_number},
		{"i", print_number},
		{"u", print_unsigned},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_x},
		{"r", print_rev},
		{"X", print_X},
		{NULL, NULL}
	};
	va_list arguments;
	int counter = 0;

	va_start(arguments, format);
	counter += get_counter(format, ops, arguments);
	va_end(arguments);
	return (counter);
}
