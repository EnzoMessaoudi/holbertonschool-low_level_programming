#include "main.h"

/**
* factorial - Function that return the factorial of a number
* @n: Character tested
* Return: Return the the value of factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
