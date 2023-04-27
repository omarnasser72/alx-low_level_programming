#include "lists.h"
#include <stdio.h>

/**
 * list_len - return length
 * @h: head
 *
 * Return: on success 1.
 *
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
