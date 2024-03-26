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
	int i = 0;
	int j;

	prt_t type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_int},
		{'i', print_int}
	};

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; type[j].pr; j++)
			{
				if (type[j].pr == format[i])
				{
					type[j].f(ap);
					i++;
				}
			}
		}
		else if (format[i] == '\\' && format[i++] == 'n')
		{
			_putchar('\n');
			i = i + 2;
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (i);
}
