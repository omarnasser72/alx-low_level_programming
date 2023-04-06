#include "main.h"

int sqrt2(int n, int i);

/**
 * _sqrt_recursion - check for char
 * @n: parameter
 *
 * Return: on success 1.
 *
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt2(n, 0));



/**
 * sqrt2 - check for char
 * @n: parameter
 * @i: param
 *
 * Return: on success 1.
 *
*/

int sqrt2(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt2(n, i + 1));
}
