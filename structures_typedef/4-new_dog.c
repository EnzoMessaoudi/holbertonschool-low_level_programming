#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	char *name_copy, *owner_copy;
	int i, name_len = 0, owner_len = 0;

	if (!d)
		return (NULL);
	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	name_copy = malloc(name_len + 1);
	owner_copy = malloc(owner_len + 1);
	if (!name_copy || !owner_copy)
	{
		free(name_copy);
		free(owner_copy);
		free(d);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];


	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
