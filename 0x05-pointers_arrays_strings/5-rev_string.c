#include "main.h"

/**
 * rev_string - check for char
 * @s: parameter
 *
*/

void rev_string(char *s)
{
	int length, i;

	length = _strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
