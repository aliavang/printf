#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - outputs char to stdout
 * @arguments: char passed
 * Return: int
 */

int print_char(va_list arguments)
{
	_putchar(va_arg(arguments, int));
	return (1);
}
/**
 * print_str - prints a string
 * @arguments: string passed
 * Return: int
 */

int print_str(va_list arguments)
{
	int i = 0;
	char *str;

	str = va_arg(arguments, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
/**
  * print_percent - prints percent
  * @arguments: percent passed
  * Return: int
  */
int print_percent(va_list arguments __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
/**
 * print_number - prints nummbers
 * @arguments: number passed
 * Return: int
 */
int print_number(va_list arguments)
{
	int rem, i;
	int number_started = 0;
	int n  = va_arg(arguments, int);
	int counter = 0;
	unsigned int m;

	if (n < 0)
	{
		counter += _putchar('-');
		m = -n;
	}
	else if (n == 0)
	{
		counter += _putchar('0');
		return (counter);
	}
	else
		m = n;
	if (m > 0)
	{
		rem = m % 10;
		if (m / 10 > 0)
		{
			for (i = 1000000000; i >= 10; i = i / 10)
			{
				if (m / i > 0)
					number_started = 1;
				if (number_started == 1)
				{
					counter += _putchar((m / i % 10) + '0');
					m = m % i;
				}
			}
		}
		counter += _putchar(rem + '0');
	}
	return (counter);
}
