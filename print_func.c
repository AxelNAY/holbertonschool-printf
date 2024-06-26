#include "main.h"

/**
 * d_recur - prints integer
 * @a: integer to print
*/

void recur(int a)
{
	unsigned int b;

	b = a;
	if (b / 10)
	{
		recur(b / 10);
	}
	_putchar(b % 10 + '0');
}

/**
 * print_int - print an integer
 * @ap: integer
 * Return: i
 */

int print_int(va_list ap)
{
	int i = 1, cp = 0;
	unsigned int n;

	n = va_arg(ap, int);
	cp = n;
	if (cp < 0)
	{
		_putchar('-');
		cp = cp * -1;
		n = cp;
		i++;
	}

	for (; n > 9; n /= 10)
	{
		i++;
	}
	recur(cp);
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
