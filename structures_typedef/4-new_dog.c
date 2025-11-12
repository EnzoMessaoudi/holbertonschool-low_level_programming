#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	for (i = 0; name[i]; i++)
	d->name = malloc(i + 1);
	if (!d->name)
		return (free(d), NULL);

	for (j = 0; owner[j]; j++)
	d->owner = malloc(j + 1);
	if (!d->owner)
		return (free(d->name), free(d), NULL);

	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (j = 0; owner[j]; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';

	d->age = age;
	return (d);
}

