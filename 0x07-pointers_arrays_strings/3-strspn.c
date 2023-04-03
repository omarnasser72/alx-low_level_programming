#include "main.h"

/**
 * _strspn - check for char
 * @s: parameter
 * @accept: pp
 *
 * Return: on success 1.
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
