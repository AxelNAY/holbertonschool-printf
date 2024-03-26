#include "main.h"
#include "print_func.c"
/**
* _printf - print everithing
* @format: format.
* @...: arguments
* Return: len
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;

	prt_t type[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_perc},
	{'d', print_int},
	{'i', print_int}
	};

	if (format == NULL)
	{
		return (-1);
	}
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
				i = i + 2;
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
	}
}
