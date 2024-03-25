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
	char *str;

	if (str == NULL)
	{
		return (-1);
	}
	va_start(ap,format);

	prt_t type;

	while (format[i])
	{
		str[i] = format[i];
		_putchar(format[i]);
	}
	for (j = 0; type[j].pr; j++)
	if (type[j].pr == str)
	_putchar(':');
	_putchar('[');
	type[j].f(ap);
	_putchar(']');
	_putchar('\n');
}
