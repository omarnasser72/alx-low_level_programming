#include "main.h"

/**
 * _memset - sdsdfsd
 * @p: prapr
 * @c: parm
 * @s: size
 *
 * Return: pointer
 */
char *_memset(char *p, char c, unsigned int s)
{
	unsigned int i;

	for (i = 0; i < s; i++)
	{
		p[i] = c;
	}
	return (p);
}

/**
 * _calloc - check for char
 * @nmemb: parameter
 * @size: param
 * Return: on success 1.
 *
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == 0)
	{
		return (NULL);
	}
	_memset(p, 0, size * nmemb);

	return (p);
}
