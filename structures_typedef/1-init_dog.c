#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name string.
 *
 * Description: This function initializes a dog structure with
 * given values for its name, age, and owner. If the pointer to
 * the structure is NULL, the function does nothing.
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
