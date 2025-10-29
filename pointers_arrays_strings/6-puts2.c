#include "main.h"
#include <stdio.h>

/**
* puts2 - function that prints every other character of a string
* @str: Character tested
*
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (*(str + 1) == '\0')
			break;
		str += 2;
	}
	_putchar('\n');
}
