#include "main.h"

/**
 * print_int - print an integer
 * @ap: integer
 * Return: 0
 */

int print_int(va_list ap)
{
	int i = 0;
	int n = va_arg(ap, int);
	char *str;

	if (n < 0)
		_putchar('-');
	while (n)
	{
		int r = n % 10;

		if (r >= 10)
		{
			str[i++] = 65 + (r - 10);
		}
		else
		{
			str[i++] = 48 + r;
		}
		n = n / 10;
	}

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_char - print a char
 *@ap: list
 * Return: 1
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);
	_putchar(c);
	return (1);
}

/**
 * print_string  - print a string
 * @ap: list for arguments to print
 * Return: len
 */

int print_string(va_list ap)
{
	int i, len;
	char *str;

	str = va_arg(ap, char*);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}

/**
 * print_perc - print a percent symbol
 * @ap: list for arguments to print
 * Return: 0
 */

int print_perc(va_list ap __attribute__((unused)))
{
	_putchar('%');
	return (0);
}
