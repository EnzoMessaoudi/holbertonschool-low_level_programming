#include "main.h"

/**
* times_table - function that shows the table multiplication
*
*
*/

void times_table(void)
{
	int nombre, multi, prod;

	for (nombre = 0; nombre <= 9; nombre++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			prod = nombre * multi;
			if (multi != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
				_putchar(' ');
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
				_putchar(prod + '0');
		}
	_putchar('\n');
	}
}

