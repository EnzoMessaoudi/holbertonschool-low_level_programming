#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Return a poitner to a 2 dimensional array of int
* @width: Number of element on a line
* @height: Nulber of elements on a column
* Return: Return the value of the array
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int *));
		if (arr == NULL)
			return (NULL);
	}
	return (arr);
}
