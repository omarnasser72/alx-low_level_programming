#include "main.h"

/**
 * _strpbrk - check for char
 * @s: parameter
 * @accept: param
 *
 * Return: on success 1.
 *
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
