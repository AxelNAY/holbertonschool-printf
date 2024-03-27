#include "main.h"

/**
 * print_int - print an integer
 *
 * @numb: integer
 */

int print_int(va_list numb)
{
	int n = va_arg(numb, int);

	_putchar(va_arg(numb, int));
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
		_putchar(n + '0');

	return (0);
}

/**
 * print_char - print a char
 *
 * @c: arguments to prints
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int) + '0');
	return (0);
}

/**
 * print_string  - print a string
 *
 * @s: arguments to print
 */

int print_string(va_list s)
{
	int i, len;
	char *str;

	str = va_arg(s, char*);
	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i] + '0');

	return (len);
}

/**
 * print_perc - print a percent symbol
 *
 * @p: arguments to print
 */

int print_perc(void)
{
	_putchar('%');
	return (0);
}
