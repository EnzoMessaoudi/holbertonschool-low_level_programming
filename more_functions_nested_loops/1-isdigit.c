#include "main.h"

/**
* _isdigit - Function that show if a character is a digit
* @c: Character tested
* Return: Return the result of the function _isdigit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
