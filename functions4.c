#include "holberton.h"
#include <unistd.h>
/**
  * print_S - prints special chars
  * @arguments: args passed
  * Return: int
  */
int print_S(va_list arguments)
{
	char *str;
	int counter = 0, i, j;
	char *hexa;

	str = va_arg(arguments, char*);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			counter += _putchar('\\');
			counter += _putchar('x');
			if (str[i] < 16)
			{
				counter += _putchar('0');
			}
			hexa = convert(str[i], 16);
			for (j = 0; hexa[j]; j++)
			{
				counter += _putchar(hexa[j]);
			}
			i++;
		}
		counter += _putchar(str[i]);
	}
	return (counter);
}






