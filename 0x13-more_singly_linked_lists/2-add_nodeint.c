#include "lists.h"

/**
 * add_nodeint- add new node at the beginning
 * @head: head ptr to listint_t
 * @n: element to add
 * Return: head ptr
 *
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
