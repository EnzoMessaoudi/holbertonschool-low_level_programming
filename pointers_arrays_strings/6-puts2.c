#include "main.h"
#include <stdio.h>

/**
* puts2 - function that prints every other character of a string
* @str: Character tested
*
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
