#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: head ptr to listint_t
 *
 *
*/

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
