#include "main.h"

/**
* string_toupper -  function that changes all lowercase letters
* @s: Character tested
* Return: Return the value of s
*/

char *string_toupper(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] > 'a' && s[n] < 'z')
		{
			s[n] -= 32;
			n++;
		}
		else
		{
			n++;
		}
	}
	return (s);
}
