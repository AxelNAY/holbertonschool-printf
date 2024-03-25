#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

typedef struct prt
{
	char *pr;
	void print_func(va_list);
} prt_t;

int _printf(const char *format, ...);
void print_length(va_list ap);
void print_neg(va_list ap);
void print_uns(va_list ap);
void print_uns_oct(va_list ap);
void print_uns_hexa(va_list ap);
void print_char(va_list ap);
void print_string(va_list ap);
void print_addr(va_list ap);
void print_perc(va_list ap);
void print_len(va_list ap);
void print_unknown(va_list ap);

#endif
