#include "main.h"

/**
* print_last_digit - Show the last digit of a number
* @n: CHARACTER tested
* Return: return the value of last
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;

	_putchar('0' + last);
	return (last);
}
