#include "lists.h"

/**
 * listint_len - return no of nodes
 * @h: ptr to listint_t
 *
 * Return: no of nodes
 *
*/

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		if (h->n)
			elements++;
		h = h->next;
	}
	return (elements);
}
