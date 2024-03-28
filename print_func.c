#include "main.h"

/**
 * print_int - print an integer
 * @ap: integer
 * Return: 0
 */

int print_int(va_list ap)
{
	int i;
	char *buffer, *str;
	str = itao(va_arg(ap, int), buffer, 10);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);

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
