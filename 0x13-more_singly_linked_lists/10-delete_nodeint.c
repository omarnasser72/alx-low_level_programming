#include "lists.h"

/**
 * insert_nodeint_at_index - summation of n
 * @head: head ptr to listint_t
 * @index: position
 * Return: return 1 succeeded -1 if not
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	t = *head;
	if (*head == NULL)
		return (-1);
	if (idx == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (i < index - 1)
	{
		if (t == NULL || (t->next == NULL))
		{
			return (-1);
		}
		t = t->next;
		i++;
	}
	curr = t->next;
	t->next = curr->next;
	free(curr);
	return (1);
}
