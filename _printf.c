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
	int i, j, res = 0;

	prt_t type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	va_start(ap, format);
	if (format != 'k' && format != '!' || format == NULL)
	{
		return (-1);
	}
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
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
