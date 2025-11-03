#include "main.h"

/**
* _strpbrk - Function that print only if there is a correspondance
* @s: Character tested by accept
* @accept: Character that we search in s
* Return: Return the value of s
*/

char *_strpbrk(char *s, char *accept)
{
	int c = 0;

	while (s[c] != '\0')
	{
		int n = 0;

		while (accept[n] != '\0')
		{
			if (accept[n] == s[c])
				return (&s[c]);

			n++;
		}
		c++;
	}
	return (0);
}
