#include "main.h"
#include <stdio.h>

/**
* _strchr - Function that locate c character of s
* @s: String tested
* @c: Character we search inside of s
* Return: Return the value of s
*/

char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if ( s[n] == c)
		{
			while (s[n] != '\0')
			{
				putchar(s[n]);
				n++;
			}
		}
		else
		{
			n++;
		}
	}
	return (s);		
}
