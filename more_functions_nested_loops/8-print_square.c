#include "main.h"

/**
* print_square - function that prints a square, followed by a new line
* @size: Character tested
*
*/

void print_square(int size)
{
	int n, n2;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 0; n < size; n++)
		{
			for (n2 = 0; n2 < size; n2++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
