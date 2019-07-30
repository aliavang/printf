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
