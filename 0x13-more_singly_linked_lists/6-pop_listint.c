#include "lists.h"

/**
 * pop_listint - pop first element listint_t list
 * @head: head ptr to listint_t
 *
 * Return: first element
*/

int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	n = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (n);
}
