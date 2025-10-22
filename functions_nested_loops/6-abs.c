#include "main.h"

/**
* _abs - Computes the absolute value of an integrer
*@n: Character tested
* Return: -n if n is negative and just n if n is positive
*/

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
