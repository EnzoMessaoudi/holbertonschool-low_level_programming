#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int c = 0;
	char l;

	while (c < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		c++;
	}
}
