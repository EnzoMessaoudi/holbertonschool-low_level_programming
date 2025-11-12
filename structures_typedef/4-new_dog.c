#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Create a new dog
* @name: Name og the dog
* @age: Age of the dog
* @owner: Owner of the dog
* Return: Return the value of p
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p;

	p = malloc(sizeof(struct dog));
	if (p == NULL)
		return (0);

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
