#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Function that frees an allocation
* @d: Array freed
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
