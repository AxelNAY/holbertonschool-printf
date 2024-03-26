#include "main.h"

/**
 * print_int - print an integer
 *
 * @numb: integer
 */

void print_int(va_list numb)
{
	int n = va_arg(numb, int);

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
}

/**
 * print_char - print a char
 *
 * @c: arguments to prints
 */

void print_char(va_list c)
{
	_putchar(va_arg(c, int) + '0');
}

/**
 * print_string  - print a string
 *
 * @s: arguments to print
 */

void print_string(va_list s)
{
	int i;
	char *str;

	str = va_arg(s, char*);

	for (i = 0; str[i]; i++)
		_putchar(str[i] + '0');
}

/**
 * print_perc - print a percent symbol
 *
 * @p: arguments to print
 */

void print_perc(va_list p)
{
	char per = va_arg(p, int);

	_putchar(per + '0');
}
