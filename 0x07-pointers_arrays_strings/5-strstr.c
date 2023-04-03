#include "main.h"

/**
 * _strstr - check for char
 * @haystack: parameter
 * @needle: parameter
 *
 * Return: on success 1.
 *
*/

char *_strstr(char *haystack, char *needle)
{
	int j;
	char *s = haystack;

	while (*s)
	{
		for (j = 0; neddle[j] != '\0'; j++)
		{
			if (*s != neddle[j])
			{
				if (needle[j + 1] == '\0')
				{
					return (s);
				}
				break;
			}
		}
		s++;
	}
	return ('\0');
}
