#include "main.h"

/**
* swap_int -  function that swaps the values of two integers.
* @a: Character tested
* @b: Character tested
*/

void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
