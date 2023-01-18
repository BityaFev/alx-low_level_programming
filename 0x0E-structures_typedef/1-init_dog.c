#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable type of dog
 * @d: initialized dog
 * @name: dog 
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
