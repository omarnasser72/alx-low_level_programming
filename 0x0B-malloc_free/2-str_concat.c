#include "main.h"

/**
 * str_concat - check for char
 * @s1: parameter
 * @s2: parameter
 * Return: on success 1.
 *
*/

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	int  i, j;
	char *p;
	
	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (i = 0; s1[i] != '\0'; i++)
	;

	for (i = 0; s2[i] != '\0'; i++)
	;

	p = (char *)malloc((size1 + size2) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < size2; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
