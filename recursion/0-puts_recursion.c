#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - Function that print a string and end it with a new line
* @s: String tha tis printed
* Return: Return the value of s
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
