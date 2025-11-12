#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates a memory for an array with malloc
* @nmemb: Number of elements we want in our array
* @size: Size of the array
* Return: Return Null if size is NULL or it doesnt work or the address if fine
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	return (arr);
}
