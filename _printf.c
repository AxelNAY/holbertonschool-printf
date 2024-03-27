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
<<<<<<< HEAD
	int i = 0, j, res = 0;
=======
	int i, j, res = 0;
>>>>>>> main

	prt_t type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_int},
		{'i', print_int}
	};

	va_start(ap, format);
<<<<<<< HEAD
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
=======
	for (i = 0;format && format[i]; i++)
	{
		if (format[i] == '%')
		{
				for (j = 0; type[j].pr; j++)
				{
					if (type[j].pr == format[i+1])
					{
						res = res + type[j].f(ap) + 1;
						i = i+2;
						break;
					}
>>>>>>> main
				}
		}
		if (format[i] == '\\' && format[i+1] == 'n')
		{
			_putchar('\n');
			i++;
<<<<<<< HEAD
=======
			break;
>>>>>>> main
		}
		else
		{
			_putchar(format[i]);
<<<<<<< HEAD
			res++;
		}
		i++;
	}
	return (res);
=======
		}
		res++;
		}
		return (res);
>>>>>>> main
}
