#include "main.h"

/**
 * puts2 - check for char
 * @str: parameter
 *
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
		*str++;
	}
	_putchar('\n');
}
