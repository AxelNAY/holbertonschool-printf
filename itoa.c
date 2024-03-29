#include "main.h"

/**
 * itoa - convert an integer to a string
 * @value: integer.
 * @buffer: string.
 * @base: base.
 * Return: the string.
 */

char *itoa(int value, char *buffer, int base)
{
	int n;
	int i = 0, j, r, len;
	char c;

	if (base < 2 || base > 32)
		return (buffer);

	if (value < 0)
		n = value * -1;
	else
		n = value;

	while (n)
	{
		r = n % base;

		if (r >= 10)
			buffer[i++] = ( r > 65) ? (r - 10) + 'a' : r + '0';
		else
			buffer[i++] = 48 + r;
		n = n / base;
	}
	if (i == 0)
		buffer[i++] = '0';

	if (value < 0 && base == 10)
		buffer[i++] = '-';
	buffer[i] = '\0';

	len = i;

	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
		c = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = c;
	}

	return (buffer);
}
