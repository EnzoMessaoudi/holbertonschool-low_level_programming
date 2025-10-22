#include <stdio.h>

/**
* _isalpha - Checkif it's an alphabetic character
*@c: Character to check
* Return: 1 if c is alphabetic and 0 if not
*/

int _isalpha(int c)
{
	if (c > 65 && c < 90)
		return (1);
	else if (c > 97 && 122)
		return (1);
	else
		return (0);
}

