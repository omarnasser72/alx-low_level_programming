#include "lists.h"

/**
 * *add_nodeint_end - add new node at the end
 * @head: head ptr to listint_t
 * @n: element to add
 * Return: new ptr
 *
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (*head)
		*head = head->next;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
