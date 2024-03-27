#include "main.h"

/**
* _printf - print everithing
* @format: format.
* @...: arguments
* Return: length.
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j, res = 0;

	prt_t type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_int},
		{'i', print_int}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; type[j].pr; j++)
			{
				if (type[j].pr == format[i++])
				{
					res = res + type[j].f(ap);
					i++;
					break;
				}
			}
		}
		else if (format[i] == '\\' && format[i++] == 'n')
		{
			_putchar('\n');
			i++;
		}
		else
		{
			_putchar(format[i]);
			res++;
		}
		i++;
	}
	return (res);
}
