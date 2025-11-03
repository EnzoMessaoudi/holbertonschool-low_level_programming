#include "main.h"

/**
* _memset: Function that fills memory with constant byte
* @s: Character source
* @b: Character we want to change
* @n: Numbers of character we want to change
* Return: Return the value of s
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
