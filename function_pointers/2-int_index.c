#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Search for an integrer
* @array: Array tested
* @size: Size of the array
* @cmp: Function used to compare value
* Return: Return -1 if nothing and the 2 if there is similarities
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
