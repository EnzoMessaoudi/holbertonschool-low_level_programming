#include "main.h"

/**
* _strstr - Function that locate a substring
* @haystack: string give by the user
* @needle: the substring we looking for
* Return: Return the value of r
*/

char *_strstr(char *haystack, char *needle)
{
	int c = 0;
	int j = 0;
	int t = 0;
	char *r;

	while (haystack[c] != '\0')
	{
		if (haystack[c] == needle[j])
		{
			while (haystack[c] != needle[j])
			{
				t++;
				c++;
				j++;
			}
			c -= t;
			r = &haystack[c];
			return (r);
		}
		c++;
	}
	return (0);
}
