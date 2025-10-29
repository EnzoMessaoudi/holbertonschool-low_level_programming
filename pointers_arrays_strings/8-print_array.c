#include "main.h"
#include <stdio.h>

/**
* print_array - Function that print the inside of an array
* @a: Character tested
* @n: Character tested
*/

void print_array(int *a, int n)
{
	int nb = 0;

	while (nb < n)
	{
		if (nb == n - 1)
		{
			printf("%d", a[nb]);
			putchar('\n');
			break;
		}
		printf("%d, ", a[nb]);
		nb++;
	}
}
