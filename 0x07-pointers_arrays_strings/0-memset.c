#include "main.h"

/**
 * _memset - check for char
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
 * Return: on success 1.
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
