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
		{"%", print_percent},
		{"d", print_number},
		{"i", print_number},
		{"u", print_number},
		{NULL, NULL}
	};
	va_list arguments;
	int counter = 0, i, j;

	va_start(arguments, format);

	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			counter += _putchar(format[i]);
			continue;
		}
		for (j = 0; ops[j].op != NULL; j++)
		{
			if (*ops[j].op == format[i + 1])
			{
				counter += ops[j].f(arguments);
				break;
			}
		}
		i++;
		if (ops[j].op == NULL)
		{
			counter += _putchar('%');
			counter += _putchar(format[i]);
		}
	}
	va_end(arguments);
	return (counter);
}
