#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: A pointer to the struct dog to print.
 *
 * Description: This function prints the name, age, and owner of a struct dog.
 * If any element of the struct dog is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
