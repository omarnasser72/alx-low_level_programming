#include "main.h"

/**
 * _isupper - check for char
 * @c: parameter
 *
 * Return: on success 1.
 *      on fail -1.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
