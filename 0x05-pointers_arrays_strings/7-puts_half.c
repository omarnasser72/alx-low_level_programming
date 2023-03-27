#include "main.h"

/**
 * puts_half - check for char
 * @str: parameter
 *
*/

void puts_half(char *str)
{
	int len, i, middle;
	char *y = str;

	len = 0;
	while (*y != '\0')
	{
		y++;
		len++;
	}
	if (len % 2 == 1)
	{
		middle = (len - 1) / 2;
	}
	else
	{
		middle = len / 2;
	}
	for (i = middle; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
