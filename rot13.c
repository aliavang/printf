#include "holberton.h"
/**
 * rot13 - Change string into rot13
 * @args: Argument list
 *
 * Return: Characters printed
 */
int rot13(va_list arguments)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	int str_i, alpha_i, str_icpy;

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		s = "(null)";
		for (str_i = 0; s[str_i] != '\0'; str_i++)
		{
			_putchar(s[str_i]);
		}
		return (str_i);
	}
        str_i = 0;
	while (s[str_i] != '\0')
	{
		str_icpy = str_i;
		alpha_i = 0;
		while ((s[str_i] >= 'a' && s[str_i] <= 'z') ||
		       (s[str_i] >= 'A' && s[str_i] <= 'Z'))
		{
			if (s[str_i] == alpha[alpha_i])
			{
				_putchar(rot13[alpha_i]);
				str_i++;
				break;
			}
			alpha_i++;
		}
		if (str_i == str_icpy)
		{
		      _putchar(s[str_i]);
		      str_i++;
		}
	}
	return (str_i);
}
