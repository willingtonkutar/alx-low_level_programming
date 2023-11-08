#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initilaizes a dog
 * @d: pointer to a dog
 * @name: name ofa dog
 * @age: the age of a dog
 * @owner: name of the owner of the dog
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
