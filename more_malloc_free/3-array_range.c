#include "main.h"
#include <stdlib.h>

/**
* array_range - Create an array of integers
* @min: Size minimum
* @max: size maximum
* Return: Return Null if it doesn't work or the adress if fine
*/

int *array_range(int min, int max)
{
	int i, c = min;

	int *arr = malloc((max - min + 1) * sizeof(int));

	if (min > max)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = c;
		c++;
	}

	return (arr);
}
