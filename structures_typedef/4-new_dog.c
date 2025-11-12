#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(struct dog_t));

	if (!d)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (d);
}
