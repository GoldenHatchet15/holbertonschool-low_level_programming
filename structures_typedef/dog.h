#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type describing a dog.
 * @name: Pointer to string for dog's name
 * @age: Variable for dog's age
 * @owner: Pointer to string for owner's name
 *
 * Description: A struct for storing information about a dog,
 * including its name, age, and the name of its owner.
 */

struct dog
{
	char *name; /* Pointer to string for dog's name */
	float age; /* Variable for dog's age */
	char *owner; /* Pointer to string for owner's name */
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
