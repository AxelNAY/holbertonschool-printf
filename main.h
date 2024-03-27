#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>

/**
 * prt - structure print.
 * @pr: character to analyse.
 * @f: function to call.
 */

typedef struct prt
{
	char pr;
	int (*f)();
} prt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list ap);
int print_char(va_list ap);
int print_string(va_list ap);
int print_perc(va_list ap __attribute__((unused)));
int print_uns(va_list ap);
int print_uns_oct(va_list ap);
int print_uns_hexa(va_list ap);
int print_addr(va_list ap);
int print_unknown(va_list ap);

#endif
