#include "dog.h"

/**
 * print_dog - check for char
 * @d: parameter
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
	{

	}
	else
	{
		if (!(d->name))
		{	
			printf("Name: (nil)\n");
		}
		else
		{	
			printf("Name: %s\n", d->name);
		}
		if (!(d->age))
		{	
			printf("Age: (nil)\n");
		}
		else
		{	
			printf("Age: %d\n", d->age);
		}
		if (!(d->owner))
		{
			printf("Owner: (nil)");
		}
		else
		{	
			printf("Owner: %s\n", d->owner);
		}
	}
}
