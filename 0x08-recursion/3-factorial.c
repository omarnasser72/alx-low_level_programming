#include "main.h"

/**
 * factorial - check for char
 * @n: parameter
 *
 * Return: on success 1.
 *
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
