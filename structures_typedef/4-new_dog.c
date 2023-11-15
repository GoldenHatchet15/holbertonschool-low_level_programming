#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to new dog_t (struct dog), or NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *new_name, *new_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(newdog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	newdog->name = new_name;
	newdog->age = age;
	newdog->owner = new_owner;

	return (newdog);
}
