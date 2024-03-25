#include "main.h"

/**
 * print_length - print the length
 *
 * @len: arguments to print
 */

void print_length(va_list len)
{
	int length = va_arg(len, int);
	if (length > 99)
	{
		_putchar(length / 100 + '0');
		_putchar((length / 10) % 10 + '0');
		_putchar(length % 10 + '0');
	}
	else if (length > 9)
	{
		_putchar(length / 10 + '0');
		_putchar(length % 10 + '0');
	}
	else
		_putchar(length + '0');
	_putchar(',');
	_putchar(' ');
	if (length > 99)
	{
		_putchar(length / 100 + '0');
		_putchar((length / 10) % 10 + '0');
		_putchar(length % 10 + '0');
	}
	else if (len > 9)
	{
		_putchar(length / 10 + '0');
		_putchar(length % 10 + '0');
	}
	else
		_putchar(length + '0');
}

/**
 * print_neg - print a negative number
 *
 * @neg: arguments to print
 */

void print_neg(va_list neg)
{
	printf("%d", va_arg(ap, double));
}

/**
 * print_char - print a char
 *
 * @c: arguments to prints
 */

void print_char(va_list c)
{
        _putchar(va_arg(ap, int));
}

/**
 * print_string  - print a string
 *
 * @s: arguments to print
 */

void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_perc - print a percent symbol
 *
 * @p: arguments to print
 */

void print_perc(va_list p)
{
        _putchar('%');
}

/**
 * print_len - print length
 *
 * @ap: arguments to prints
 */

void print_len(va_list len)
{
	int length = va_arg(len, int);
	if (length > 99)
	{
		_putchar(length / 100 + '0');
		_putchar((length / 10) % 10 + '0');
		_putchar(length % 10 + '0');
	}
	else if (length > 9)
	{
		_putchar(length / 10 + '0');
		_putchar(length % 10 + '0');
	}
	else
		_putchar(length + '0');
}
