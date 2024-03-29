# Description du projet C - printf.

## Synopsis

The goal of this projet is to recreate the C function printf. For that we will use Variadic Functions, structure, libraries and multiple C Programs. This function display any character enter, data contains in differents type of variables like int, char, unsigned int and string contain in pointer.

The function shall return the length of every character passed in the function or -1 if there nothing passed.

For the moment, we only succefully have 5 format specifiers take into account but we will update this projet soon.

## Prototype

`int _printf(const char *format, ...)`

* _printf - Display anything.

* format - string to display.

* ... - variable(s) contening a data to display if there is one of more format specifiers.

* Return - the length of every character passed in the function including the variables display or -1 if nothing is passed.

## Files Create

* [_printf.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/_printf.c) | C Program used for display anything.

* [print_func.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/print_func.c) | Contain all the function permitting display the data in variable by format specifiers.

* [itoa.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/itoa.c) | Convert an integer to a string.

* [_putchar.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/_putchar.c) | Contain the function putchar.

## Execution

### main.c

```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
```

### Compilation

* gcc : When we use gcc to compile, it analyzes our code, translates it into machine language and creates an executable file.

```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

Automatically create the file a.out for compile.

### Output

```
$ ./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## About

All files are create using a sandbox in Ubunto 22.04 with vi or Visual Studio Code.

Axel NAY create the repository give the access to Adryan Bestard.
