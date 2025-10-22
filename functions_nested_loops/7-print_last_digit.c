#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;

	_putchar('0' + last);
	return (0);
}
