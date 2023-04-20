#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add
 * @a: parameter
 * @b: param
 * Return: on success 1.
 *
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: parameter
 * @b: param
 * Return: on success 1.
 *
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - add
 * @a: parameter
 * @b: param
 * Return: on success 1.
 *
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: parameter
 * @b: param
 * Return: on success 1.
 *
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - add
 * @a: parameter
 * @b: param
 * Return: on success 1.
 *
*/

int op_mod(int a, int b)
{
	return (a % b);
}
