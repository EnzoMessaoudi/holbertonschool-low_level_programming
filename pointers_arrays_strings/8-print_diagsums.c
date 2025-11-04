#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Function that the sum of two diagonals
* @a: Array tested
* @size: Size of the array
*
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + j];
		j++;
		i++;
	}
	printf("%d, ", sum1);

	j = 0;
	i = size - 1;

	while (i >= 0)
	{
		sum2 += a[i * size + j];
		j++;
		i--;
	}
	printf("%d\n", sum2);
}
