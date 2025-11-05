#include "main.h"

/**
* _puts_recursion - Function that print a string and end it with a new line
* @s: String tha tis printed
* Return: Return the value of s
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
