#include "main.h"
#include <stdio.h>

/**
* puts_half - Function that prints half of a string, followed by a new line
* @str: Character tested
*
*/

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
		i++;

	n = (i + 1) / 2;

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
