#include "lists.h"

/**
 * get_nodeint_at_index - frees listint_t list
 * @head: head ptr to listint_t
 * @index : index of returnend node
 *
 * Return: return node at nth position
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t;
	unsigned int i = 0;

	t = head;
	while (t && i < index)
	{
		i++;
		t = t->next;
	}
	if (t)
		return (t);
	return (NULL);
}
