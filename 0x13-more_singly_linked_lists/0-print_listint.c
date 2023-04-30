#include "lists.h"

/**
 * print_listint - print no of nodes
 * @h: ptr to listint_t
 *
 * Return: no of nodes
 *
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
