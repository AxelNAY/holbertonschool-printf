#include <unistd.h>
#include "main.h"

/**
* main - Prints _putchar.
*
* Return: Always the value.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
