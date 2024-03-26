#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

typedef struct prt
{
	char pr;
	void (*f)(va_list);
} prt_t;

int _putchar(char c);
int _printf(const char *format, ...);
void print_int(va_list len);
void print_uns(va_list uns);
void print_uns_oct(va_list oct);
void print_uns_hexa(va_list hex1, va_list hex2);
void print_char(va_list c);
void print_string(va_list s);
void print_addr(va_list addr);
void print_perc(va_list p);
void print_unknown(va_list u);

#endif
