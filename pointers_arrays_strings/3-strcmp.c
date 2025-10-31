#include "main.h"
#include <stdio.h>

/**
* _strcmp - function that compares two strings
* @s1: Character tested
* @s2: character tested
* Return: return the value
*/

int _strcmp(char *s1, char *s2)
{
	int c = 0;
	int n = 0;

	while (s1[c] == s2[c] && (s1[c] != '\0' || s2[c] != '\0'))
	{
		c++;
	}
	n = s1[c] - s2[c];
	return (n);
}
