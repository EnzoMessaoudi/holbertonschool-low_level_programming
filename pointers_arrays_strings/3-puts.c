#include "main.h"

/**
* _puts - Function that print a string
* @str: Character tested
*
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
