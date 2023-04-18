#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - check for char
 * @name: name
 * @age: age
 * @owner: name
 *
 * Description: desc
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*_DOG_H */