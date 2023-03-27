#include "main.h"

/**
 * print_rev - check for char
 * @s: parameter
 *
 */

void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
