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
