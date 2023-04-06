#include "main.h"

int sqrt(int n, int i);

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
	return (sqrt(n, 0));



/**
 * sqrt - check for char
 * @n: parameter
 * @i: param
 *
 * Return: on success 1.
 *
*/

int sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}
