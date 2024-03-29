#Description du projet C - printf.

##Synopsis

The goal of this projet is to recreate the C function printf. For that we will use Variadic Functions, structure, libraries and multiple C Programs. This function display any character enter, data contains in differents type of variables like int, char, unsigned int and string contain in pointer.

The function shall return the length of every character passed in the function or -1 if there nothing passed.

For the moment, we only succefully have 5 format specifiers take into account but we will update this projet soon.

##Prototype

'int _printf(const char *format, ...)'

* _printf - Display anything.

* format - string to display.

* ... - variable(s) contening a data to display if there is one of more format specifiers.

* Return - the length of every character passed in the function including the variables display or -1 if nothing is passed.

##Files Create

* [_printf.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/_printf.c) | C Program used for display anything.

* [print_func.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/print_func.c) | Contain all the function permitting display the data in variable by format specifiers.

* [itoa.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/itoa.c) | Convert an integer to a string.

* [_putchar.c](https://github.com/AxelNAY/holbertonschool-printf/blob/main/_putchar.c) | Contain the function putchar.
