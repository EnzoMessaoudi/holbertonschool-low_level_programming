#include "main.h"

/**
* _memset - Function that add b bytes on the n firsgt columns of s
* @s: Character source
* @b: Character tested
* @n: Character tested
* Return: Return the value of _memset
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
