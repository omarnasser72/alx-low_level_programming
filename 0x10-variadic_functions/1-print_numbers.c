#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Returns the sum of all its paramters.
 * @separator: The number of paramters passed to the function.
 * @n: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, var;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		var = va_arg(ap, int);
		printf("%d", var);
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
