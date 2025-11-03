#include "main.h"
#include <stdio.h>

/**
* _strchr - Function that locate c character of s
* @s: String tested
* @c: Character we search inside of s
* Return: Return the address of the same charactere or NULL if not
*/

char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
			return (&s[n]);

		n++;
	}
	if (c == '\0')
		return (&s[n]);

	return (NULL);
}
