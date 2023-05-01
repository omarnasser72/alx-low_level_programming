#include "lists.h"

/**
 * sum_listint - summation of n
 * @head: head ptr to listint_t
 *
 * Return: return sum
*/

int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int sum = 0;

	if (t == NULL)
		return (0);
	while (t)
	{
		if (t->n)
		{
			sum += t->n;
		}
		t = t->next;
	}
	return (sum);
}
