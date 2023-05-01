#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head ptr to listint_t
 * Return: return head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL;
	listint_t *p = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
