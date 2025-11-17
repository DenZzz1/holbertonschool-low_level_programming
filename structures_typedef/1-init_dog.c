#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog struct
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
