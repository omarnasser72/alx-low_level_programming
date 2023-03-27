#include "main.h"

/**
 * puts2 - check for char
 * @str: parameter
 *
*/

void puts2(char *str)
{
	int len, i;
	char *y = str;

	len = 0;
	while (*y != '\0')
	{
		y++;
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
