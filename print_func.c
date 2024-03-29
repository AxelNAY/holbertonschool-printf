#include "main.h"

/**
 * print_int - print an integer
 * @ap: integer
 * Return: i
 */

int print_int(va_list ap)
{
	int i;
	char buffer[22];

	str = itoa(va_arg(ap, int));
	for (i = 0; buffer[i]; i++)
		_putchar(buffer[i]);

	return (i);
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
 * Return: 1
 */

int print_perc(va_list ap __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
