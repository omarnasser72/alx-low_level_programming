#include "op_functions.c"

/**
 * get_op_func - select fun
 * @s: parameter
 *
 * Return: on success 1.
 *
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;


	return (ops[i].f);
}
