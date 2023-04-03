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
		char *p = needle;
		char *p2 = s;

		while (*p2 == *p && *p != '\0')
		{
			p++;
			p2++;

		}
		if (*p == '\0')
			return (s);
		s++;
	}
	return ('\0');
}
