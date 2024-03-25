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

#endif
