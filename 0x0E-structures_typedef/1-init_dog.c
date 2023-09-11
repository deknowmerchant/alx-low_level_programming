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
	/* Check if the pointer to struct dog is not NULL */
	if (d != NULL)
	{
		/* Initialize the struct members with the provided values */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
