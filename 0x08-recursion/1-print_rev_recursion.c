#include "main.h"

/**
 * _print_rev_recursion - check for char
 * @s: parameter
 *
 * Return: on success 1.
 *
*/


void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
