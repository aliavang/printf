#include "holberton.h"
#include <stdarg.h>
/**
 * get_counter - produces output according to a format
 * @format: character string
 * @ops: struct
 * @arguments: args passed
 * Return: int
 */
int get_counter(const char *format, op_t ops[], va_list arguments)
{
	int counter = 0, i, j;

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
				i++;
				break;
			}
		}
		if (ops[j].op == NULL)
		{
			i++;
			counter += _putchar('%');
			counter += _putchar(format[i]);
		}
	}
	va_end(arguments);
	return (counter);
}
