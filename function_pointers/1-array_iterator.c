#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - Executes a function on elements of an array
* @array: array gived by the user
* @size: Size of the array
* @action: Function that affect the array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i != size; i++)
		action(array[i]);
}
