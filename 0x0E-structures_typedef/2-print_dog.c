#include "dog.h"

/**
 * print_dog - check for char
 * @d: parameter
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age ? d->age : "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
