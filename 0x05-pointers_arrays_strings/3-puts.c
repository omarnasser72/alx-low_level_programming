#include "main.h"

/**
 * _puts - check for char
 * @str: parameter
 *
*/

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
