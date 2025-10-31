#include "main.h"

/**
* reverse_array - Function that reverse a string
* @a: string
* @n: Number of string
*/

void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;
	int tmp = 0;

	while (s < e)
	{
		tmp = a[s];
		a[s] = a[e];
		a[e] = tmp;
		e--;
		s++;
	}
}
