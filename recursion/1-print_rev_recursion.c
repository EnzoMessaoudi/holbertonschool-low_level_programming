#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Function that print a string in reverse
* @s: String tested
* Return: Return the function
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
