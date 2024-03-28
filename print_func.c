#include "main.h"

/**
 * print_int - print an integer
 * @ap: integer
 * Return: 0
 */

int print_int(va_list ap)
{
	int n = va_arg(ap, int);

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	if (n > 9999)
	{
		_putchar(n / 10000 + '0');
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 999)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 9)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	return (0);
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
	if (str == NULL)
	{
		str = "(null)";
	}
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
	return (1);
}
