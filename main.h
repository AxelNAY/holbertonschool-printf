#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

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
int print_int(va_list numb);
int print_char(va_list c);
int print_string(va_list s);
int print_perc(void);
int print_uns(va_list uns);
int print_uns_oct(va_list oct);
int print_uns_hexa(va_list hex);
int print_addr(va_list addr);
int print_unknown(va_list u);

#endif
