#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: Frees the memory allocated for a dog_t structure
 *              and its members. Does nothing if the pointer is NULL.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

