#include "main.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of specific char
* @size: Size of the array
* @c: Charcter inside the array
* Return: Return the address of the arra
*
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
