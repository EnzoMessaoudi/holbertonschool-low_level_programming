include "main.h"

/**
* print_line - function that draws a straight line in the terminal.
* @n: Character tested
*
*/

void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= n; t++)
			_putchar('_');

		_putchar('\n');
	}
}
