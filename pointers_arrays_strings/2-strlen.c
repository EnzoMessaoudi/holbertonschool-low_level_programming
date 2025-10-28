#include "main.h"
#include <stdio.h>

/**
* _strlen - function that returns the length of a string
* @s: Character tested
* Return: Return the result
*/

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
