#include "holberton.h"
#include <unistd.h>
/**
 * print_x - prints hexadecimal with small letters
 * @arguments: args passed
 * Return: int
 */
int print_x(va_list arguments)
{
	int i, counter = 0;
	unsigned int m;
	char *str;

	m = va_arg(arguments, unsigned int);
	str = convert(m, 16);
	if (m == 0)
		counter += _putchar('0');
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			counter += _putchar(str[i] + 32);
		else
			counter += _putchar(str[i]);
	}
	return (counter);
}
/**
 * print_X - prints hexa with capital
 * @arguments: args passed
 * Return: int
 */
int print_X(va_list arguments)
{
	int i, counter = 0;
	unsigned int m;
	char *str;

	m = va_arg(arguments, unsigned int);
	str = convert(m, 16);
	if (m == 0)
		counter += _putchar('0');
	for (i = 0; str[i] != '\0'; i++)
	{
		counter += _putchar(str[i]);
	}
	return (counter);
}
/**
 * print_rev - prints reversed
 * @arguments: args passed
 * Return: int
 */
int print_rev(va_list arguments)
{
	char *str;
	int len = 0, i;

	str = va_arg(arguments, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[len] != '\0')
	{
		len++;
	}
	i = len - 1;

	while (i >= 0)
	{
		_putchar(str[i--]);
	}
	return (len);
}
/**
  * print_rot13 - prints string with rot13
  * @arguments: args passed
  * Return: int
  */
int print_rot13(va_list arguments)
{
	int i, j;
	char alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char swap[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *str;

	str = va_arg(arguments, char *);
	if (str == NULL)
		s = "(null)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (alpha[j] == str[i])
			{
				_putchar(swap[j]);
				break;
			}
		}
		if (!alpha[j])
			_putchar(str[i]);
	}
	return (i);
}
