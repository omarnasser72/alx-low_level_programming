#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list elements
 * @h: list pointer
 *
 * Return: no of nodes.
 *
*/

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (h->len), h->str);

		h = h->next;
		c++;
	}
	return (c);
}
