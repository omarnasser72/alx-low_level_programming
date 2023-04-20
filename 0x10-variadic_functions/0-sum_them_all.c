#include "variadic_functions_h"
#include <stdarg.h>

/**
 * sum_them_all - fun
 * @n: parameter
 * @...: elipse
 * Return: on success 1.
 *
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list p;

	if (!n)
		return (0);

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}

	va_end(p);
	return (sum);
}
