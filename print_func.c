#include "main.h"

/**
 * print_length - print a int
 *
 * @ap: arguments to print
 */

void print_length(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_neg - print a float
 *
 * @ap: arguments to prints
 */

void print_neg(va_list ap)
{
	printf("%d", va_arg(ap, double));
}

/**
 * print_uns - print a int
 *
 * @ap: arguments to print
 */

void print_uns(va_list ap)
{
        printf("%u", va_arg(ap, int));
}

/**
 * print_uns_oct - print a unsigned int octal
 *
 * @ap: arguments to print
 */

void print_uns_oct(va_list ap)
{
        printf("%u", va_arg(ap, int));
}

/**
 * print_uns_hexa - print a unsigned int hexa
 *
 * @ap: arguments to print
 */

void print_uns_hexa(va_list ap)
{
        printf("0x%u", va_arg(ap, int));
}

/**
 * print_char - print a char
 *
 * @ap: arguments to prints
 */

void print_char(va_list ap)
{
        printf("%c", va_arg(ap, int));
}

/**
 * print_string  - print a string
 *
 * @ap: arguments to print
 */

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_addr - print a address
 *
 * @ap: arguments to prints
 */

void print_addr(va_list ap)
{
        printf("%p", va_arg(ap, int));
}

/**
 * print_perc - print a percent
 *
 * @ap: arguments to prints
 */

void print_perc(va_list ap)
{
        printf("%%", va_arg(ap, int));
}

/**
 * print_len - print a char
 *
 * @ap: arguments to prints
 */

void print_len(va_list ap)
{
        printf("%d", va_arg(ap, int));
}

/**
 * print_unknown - print a char
 *
 * @ap: arguments to prints
 */

void print_unknown(va_list ap)
{
        printf("%r", va_arg(ap, int));
}
