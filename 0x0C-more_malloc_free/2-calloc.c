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
	char *ptr = p;

	while(n--)
		*s++ = b;
	return (ptr);
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
	void *p;

	if(nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);
	_memset(p, '0', sizeof(int) * nmemb);

	return (p);
}
