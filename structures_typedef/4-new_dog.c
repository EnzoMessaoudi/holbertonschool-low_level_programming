#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - Creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: pointer to new dog, or NULL if failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	new_name = strdup(name);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}

	new_owner = strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
