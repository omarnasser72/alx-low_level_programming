#include "main.h"

/**
 * _strlen - gets length
 * @s: parameter
 *
 * Return: on success 1.
 *
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}


/**
 * print_list - print list elements
 * @h: list pointer
 *
 * Return: no of nodes.
 *
*/

size_t print_list(const list_t *h)
{
	list_t *ptr = h;
	size_t c = 0;

	while (ptr)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		ptr = ptr->next;
	}
	return (c);
}
