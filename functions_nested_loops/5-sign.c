#include "main.h"

/**
* print_sign - Show if a number is positive or negative
* @n: Character shown
* Return: 1 if positive, 0 if nul or -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
