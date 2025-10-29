#include "main.h"

/**
* print_rev - function that print in reverse a string
* @s: Character tested
*
*/

void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
		s++;

	s--;

	while (s >= start)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
