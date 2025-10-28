#include "main.h"

/**
* print_triangle - function that prints a triangle, followed by a new line
* @size: Character tested
*
*/

void print_triangle(int size)
{
	int n, a;

	if (size == 0)
		_putchar('\n');

	for (n = 0; n < size; n++)
	{
		for (a = 0; a < size - n - 1; a++)
			_putchar(' ');
		for (a = 0; a <= n; a++)
			_putchar('#');

		_putchar('\n');
	}
}
