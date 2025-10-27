#include "main.h"

/**
* more_numbers - Function that print 10 times numbers from 0 to 14
*
*
*/

void more_numbers(void)
{
	int l, n;

	for (l = 0; l <= 9; l++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');

			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
