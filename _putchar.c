#include <unistd.h>
#include "main.h"

/**
* _putchar - Prints _putchar.
* @c: character 
* Return: Always the value.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
