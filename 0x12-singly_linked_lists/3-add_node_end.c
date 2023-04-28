#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node at front
 * @head: parameter
 * @str: str
 * Return: on success 1.
 *
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (curr->next)
		curr = curr->next;

	curr->next = new;
	return (new);
}
