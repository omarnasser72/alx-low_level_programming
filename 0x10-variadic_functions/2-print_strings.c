#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Returns the sum of all its paramters.
 * @separator: The number of paramters passed to the function.
 * @n: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(ap, char*));
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
