#include "main.h"
#include <limits.h>

#ifndef INT_MIN
#define INT_MIN (-2147483647 - 1)
#endif

/**
* _printf - print everithing
* @format: format.
* @...: arguments
* Return: length.
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, res = 0;

	prt_t type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_int},
		{'i', print_int},
		{'0', NULL}
	};
	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != 'K' && format[i + 1] != '!')
		{
			i++;
			for (j = 0; type[j].pr; j++)
			{
				if (type[j].pr == format[i])
				{
					res = res + type[j].f(ap);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			res++;
		}
	}
	va_end(ap);
	return (res);
}
