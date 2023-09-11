#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name of the dog.
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}

