#include "main.h"

/**
 * _strlen_recursion - check for char
 * @s: parameter
 *
 * Return: on success 1.
 *
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
