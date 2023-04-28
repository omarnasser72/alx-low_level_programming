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
	list_t *new = malloc(sizeof(list_t));
	list_t *curr = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;
	curr = (*head);
	while (curr->next)
		curr = curr->next;
	if (new)
	{
		curr->next = new;
		new->str = strdup(str);
		new->len = len;
		new->next = null;
		return (new);
	}
	else
		return (NULL);
}
