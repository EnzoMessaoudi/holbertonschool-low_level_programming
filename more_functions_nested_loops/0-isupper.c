#include "main.h"

/**
* _isupper - function that show if a character is a uppercase
* @c: character tested
* Return: return the result of the function _isupper
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
