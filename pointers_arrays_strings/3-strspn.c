#include "main.h"

/**
* _strspn - Function that gets the lenght of a prefix sub
* @s: Character tested
* @accept: Characters we wounts inside of s
* Return: Return the value of res
*/

unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int res = 0;

	while (s[c] != '\0')
	{
		int n = 0;

		while (accept[n] != '\0')
		{
			if (accept[n] == s[c])
			{
				res++;
				break;
			}
			else
				n++;
		}
		if (accept[n] == '\0')
			return (res);
		c++;
	}
	return (res);
}
