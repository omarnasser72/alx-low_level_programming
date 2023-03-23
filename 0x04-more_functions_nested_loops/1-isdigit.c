#include "main.h"

/**
 * _isdigit - check for char
 * @c: parameter
 *
 * Return: on success 1.
 *      on fail -1.
*/

int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
