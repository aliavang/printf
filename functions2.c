#include "holberton.h"
#include <unistd.h>
/**
 * print_unsigned - prints unsigned nummbers
 * @arguments: number passed
 * Return: int
 */
int print_unsigned(va_list arguments)
{
	int rem, i;
	int number_started = 0;
	unsigned int n  = va_arg(arguments, unsigned int);
	int counter = 0;

	if (n == 0)
	{
		counter += _putchar('0');
		return (counter);
	}
	rem = n % 10;
	if (n / 10 > 0)
	{
		for (i = 1000000000; i >= 10; i = i / 10)
		{
			if (n / i > 0)
				number_started = 1;
			if (number_started == 1)
			{
				counter += _putchar((n / i % 10) + '0');
				n = n % i;
			}
		}
	}
	counter += _putchar(rem + '0');
	return (counter);
}
/**
  * convert - converts into base
  * @n: number to convert
  * @base: base
  * Return: char
  */
char *convert(unsigned int n, int base)
{
	const char content[] = "0123456789ABCDEF";
	static char buffer[32];
	char *p;

	p = &buffer[31];
	*p = '\0';

	while (n != 0)
	{
		p--;
		*p  = content[n % base];
		n /= base;
	}
	return (p);
}
/**
  * print_binary - prints arg in binary
  * @arguments: args passed
  * Return: int
  */
int print_binary(va_list arguments)
{
	int i, counter = 0;
	unsigned int m;
	char *str;

	m = va_arg(arguments, unsigned int);
	str = convert(m, 2);

	if (m == 0)
		counter += _putchar('0');
	for (i = 0; str[i] != '\0'; i++)
	{
		counter += _putchar(str[i]);
	}
	return (counter);
}
/**
  * print_octal - prints octal arg
  * @arguments: args passed
  * Return: int
  */
int print_octal(va_list arguments)
{
	int i, counter = 0;
	unsigned int m;
	char *str;

	m = va_arg(arguments, unsigned int);
	str = convert(m, 8);
	for (i = 0; str[i] != '\0'; i++)
	{
		counter += _putchar(str[i]);
	}
	return (counter);
}
