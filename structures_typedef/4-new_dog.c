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
	dog_t *p;

	if (!name || !owner)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);

	p->name = strdup(name);
	if (!p->name)
	{
		free(p);
		return (NULL);
	}
	p->owner = strdup(owner);
	if (!p->owner)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	p->age = age;

	return (p);
}
