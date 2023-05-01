#include "lists.h"

/**
 * insert_nodeint_at_index - summation of n
 * @head: head ptr to listint_t
 * @idx: position
 * @n: value inside node
 * Return: return sum
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *t = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (t && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = t->next;
			t->next = new;
			return (new);
		}
		else
		{
			t = t->next;
		}
		i++;
	}
	return (NULL);
}
