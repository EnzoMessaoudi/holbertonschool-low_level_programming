#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n: Character tested
*
*/

void print_diagonal(int n)
{
	int t, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= n; t++)
		{
			for (a = 0; a <= t - 2; a++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');

		}
	}
}
