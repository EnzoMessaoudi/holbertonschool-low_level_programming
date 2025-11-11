#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates a memory
* @b: Size we want
* Return: Return the address of malloc
*/

void *malloc_checked(unsigned int b)
{
	int *po = malloc(b);

	if (po == NULL)
		exit(98);

	return (po);
}
