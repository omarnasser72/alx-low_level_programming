#include "main.h"

/**
 * _memcpy - check for char
 * @dest: parameter
 * @src: parameter
 * @n: int
 *
 * Return: on success 1.
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
